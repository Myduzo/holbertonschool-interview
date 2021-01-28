#!/usr/bin/python3
"""
    script that reads stdin line by line and computes metrics
"""

import sys

codes = {
    "200": 0,
    "301": 0,
    "400": 0,
    "401": 0,
    "403": 0,
    "404": 0,
    "405": 0,
    "500": 0
}


def print_status():
    """
        function that prints code status
    """
    print("File size: {}".format(fsize))

    for key in codes.keys():
        if codes[key]:
            print("{}: {}".format(key, codes[key]))


def split_line(line):
    """
        function that parses lines
    """
    st_code = line.split()[-2]

    try:
        if st_code in codes.keys():
            codes[st_code] += 1
        return int(line.split()[-1])

    except Exception:
        return 0

if __name__ == "__main__":
    fsize = 0
    count = 1

    try:
        for line in sys.stdin:
            fsize += split_line(line)
            if count % 10 == 0:
                print_status()
            count += 1

    except KeyboardInterrupt:
        print_status()
        raise

    print_status()
