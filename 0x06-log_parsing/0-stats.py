#!/usr/bin/python3

import sys
from signal import signal, SIGINT


def handler(signal_received, frame):
    # Handle any cleanup here
    # file_size = file_size + int(line_splited[len(line_splited)-1])
    log_parsing = "File size: {}".format(file_size)
    print(log_parsing, flush=True)
    for key, value in sorted(status.items()):
        if value > 0:
            print("{}: {}".format(key, value))
    sys.exit(1)

if __name__ == '__main__':
    signal(SIGINT, handler)
    status = {"200": 0, "301": 0, "400": 0, "401": 0, "403": 0,
              "404": 0, "405": 0, "500": 0}
    countline = 0
    file_size = 0
    log_parsing = ""
    try:
        for line in sys.stdin:
            line_splited = line.split(" ")
            # get code status
            key = int(line_splited[len(line_splited)-2])
            status[str(key)] += 1
            # get size and increment its value
            file_size = file_size + int(line_splited[len(line_splited)-1])
            # increment number of lines readed
            countline += 1
            # every 10 lines print info
            if countline % 10 == 0 and countline != 0:
                log_parsing = "File size: {}".format(file_size)
                print(log_parsing, flush=True)
                # print(status, flush=True)
                for key, value in sorted(status.items()):
                    if value > 0:
                        print("{}: {}".format(key, value))
        sys.stdout.flush()
    except(BrokenPipeError, IOError):
        pass
    sys.stderr.close()
