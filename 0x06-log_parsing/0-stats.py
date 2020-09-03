#!/usr/bin/python3
'''log parsing '''

import sys


if __name__ == '__main__':
    status = {"200": 0, "301": 0, "400": 0, "401": 0, "403": 0,
              "404": 0, "405": 0, "500": 0}
    file_size = 0
    log_parsing = ""
    countline = 0
    
    def print_msg():
        log_parsing = "File size: {}".format(file_size)
        print(log_parsing)
        # print(status, flush=True)
        for key, value in sorted(status.items()):
            if value > 0:
                print("{}: {}".format(key, value))

    try:
        for line in sys.stdin:
            line_splited = line.split()
            # get code status
            key = int(line_splited[len(line_splited)-2])
            # if code exist
            if str(key) in status:
                status[str(key)] += 1
                # get size and increment its value
                file_size = file_size + int(line_splited[len(line_splited)-1])
            # increment number of lines readed
            countline += 1
            # every 10 lines print info
            if countline % 10 == 0:
                print_msg()
    except KeyboardInterrupt:
        print_msg()
        raise
