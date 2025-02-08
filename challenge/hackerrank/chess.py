import tkinter as tk
from tkinter import Canvas, Tk


class ChessGame:
    def __init__(self, root):
        self.root = root
        self.root.title("Chess Game")
        self.root.geometry("720x720")

        self.canvas = Canvas(root, width=720, height=720)
        self.canvas.pack()

        self.square_size = 90
        self.selected_piece = None  # (row, col, item_id, piece_tag)
        self.current_turn = "white"
        self.piece_symbols = {
            "wR": "♖",
            "wN": "♘",
            "wB": "♗",
            "wQ": "♕",
            "wK": "♔",
            "wP": "♙",
            "bR": "♜",
            "bN": "♞",
            "bB": "♝",
            "bQ": "♛",
            "bK": "♚",
            "bP": "♟",
        }

        self.draw_board()
        self.initialize_pieces()

        self.canvas.bind("<Button-1>", self.select_piece)
        self.canvas.bind("<B1-Motion>", self.drag_piece)
        self.canvas.bind("<ButtonRelease-1>", self.drop_piece)

    def draw_board(self):
        colors = ["#DDB88C", "#A66D4F"]
        for row in range(8):
            for col in range(8):
                color = colors[(row + col) % 2]
                x0 = col * self.square_size
                y0 = row * self.square_size
                x1 = x0 + self.square_size
                y1 = y0 + self.square_size
                self.canvas.create_rectangle(x0, y0, x1, y1, fill=color, tags="square")

    def initialize_pieces(self):
        # Initialize back ranks
        back_row = ["R", "N", "B", "Q", "K", "B", "N", "R"]
        for col, piece in enumerate(back_row):
            self.create_piece(0, col, f"b{piece}")
            self.create_piece(7, col, f"w{piece}")

        # Initialize pawns
        for col in range(8):
            self.create_piece(1, col, "bP")
            self.create_piece(6, col, "wP")

    def create_piece(self, row, col, piece):
        x = col * self.square_size + self.square_size // 2
        y = row * self.square_size + self.square_size // 2
        color = "white" if piece.startswith("w") else "black"
        self.canvas.create_text(
            x,
            y,
            text=self.piece_symbols[piece],
            font=("Arial", 32, "bold"),
            fill=color,
            tags=("piece", piece),
        )

    def select_piece(self, event):
        x, y = event.x, event.y
        col = x // self.square_size
        row = y // self.square_size
        item, piece_tag = self.get_piece_at(row, col)

        if piece_tag and self.is_valid_turn(piece_tag):
            self.selected_piece = (row, col, item, piece_tag)
            self.canvas.tag_raise(item)

    def drag_piece(self, event):
        if self.selected_piece:
            x, y = event.x, event.y
            self.canvas.coords(self.selected_piece[2], x, y)

    def drop_piece(self, event):
        if not self.selected_piece:
            return

        old_row, old_col, item_id, piece_tag = self.selected_piece
        new_col = event.x // self.square_size
        new_row = event.y // self.square_size

        # Validate move
        if not self.is_valid_move(old_row, old_col, new_row, new_col, piece_tag):
            # Snap back to original position
            self.snap_back(item_id, old_col, old_row)
            self.selected_piece = None
            return

        # Handle captures
        target_item, target_piece = self.get_piece_at(new_row, new_col)
        if target_item and target_piece[0] != piece_tag[0]:
            self.canvas.delete(target_item)

        # Move piece
        self.move_piece(item_id, new_col, new_row)
        self.current_turn = "black" if self.current_turn == "white" else "white"
        self.selected_piece = None

    def is_valid_move(self, old_row, old_col, new_row, new_col, piece_tag):
        piece_type = piece_tag[1]
        if piece_type == "P":
            return self.is_valid_pawn_move(
                old_row, old_col, new_row, new_col, piece_tag
            )
        # Add other piece validations here
        return True  # Temporarily allow other pieces to move freely

    def is_valid_pawn_move(self, old_row, old_col, new_row, new_col, piece_tag):
        color = piece_tag[0]
        direction = -1 if color == "w" else 1
        start_row = 6 if color == "w" else 1

        # Basic move validation
        if old_col == new_col:
            # Forward movement
            if new_row == old_row + direction:
                return self.is_square_empty(new_row, new_col)
            if (
                new_row == old_row + 2 * direction
                and old_row == start_row
                and self.is_square_empty(new_row, new_col)
                and self.is_square_empty(old_row + direction, new_col)
            ):
                return True
            return False

        # Capture move
        if abs(new_col - old_col) == 1 and new_row == old_row + direction:
            target_piece = self.get_piece_at(new_row, new_col)[1]
            return target_piece and target_piece[0] != color

        return False

    def is_square_empty(self, row, col):
        return self.get_piece_at(row, col)[1] is None

    def get_piece_at(self, row, col):
        x = col * self.square_size + self.square_size // 2
        y = row * self.square_size + self.square_size // 2
        items = self.canvas.find_overlapping(x - 1, y - 1, x + 1, y + 1)
        for item in items:
            tags = self.canvas.gettags(item)
            if "piece" in tags and len(tags) > 1:
                return (item, tags[1])
        return (None, None)

    def is_valid_turn(self, piece_tag):
        return (self.current_turn == "white" and piece_tag.startswith("w")) or (
            self.current_turn == "black" and piece_tag.startswith("b")
        )

    def snap_back(self, item_id, col, row):
        x = col * self.square_size + self.square_size // 2
        y = row * self.square_size + self.square_size // 2
        self.canvas.coords(item_id, x, y)

    def move_piece(self, item_id, new_col, new_row):
        x = new_col * self.square_size + self.square_size // 2
        y = new_row * self.square_size + self.square_size // 2
        self.canvas.coords(item_id, x, y)


if __name__ == "__main__":
    root = Tk()
    game = ChessGame(root)
    root.mainloop()
