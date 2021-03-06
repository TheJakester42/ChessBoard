import re
from board import Board
from piece import Color
#read the file in
PGN_FILE = open("./kasparov_topalov_1999.pgn","r")
PGN_CONTENTS = PGN_FILE.read()
#parse out each move
TURN_PATTERN = re.compile(r'\d{1,2}[.] .+? .+? ')
MOVES = TURN_PATTERN.finditer(PGN_CONTENTS)
MOVES = [move.group(0) for move in MOVES]
MOVES = [(move.split()[1],move.split()[2]) for move in MOVES]

board = Board()
time = 0
time_delta = 1

try:
#parse each move
    for (index,move) in enumerate(MOVES):
        board.execute_move(move[0],Color.WHITE,time,time_delta)
        time +=time_delta
        board.execute_move(move[1],Color.BLACK,time,time_delta)
        time += time_delta
finally:    
    buffer = board.get_spines_string() 
    spline_file = open("pieces_splines.inc","w")
    spline_file.write(buffer)
    spline_file.close()