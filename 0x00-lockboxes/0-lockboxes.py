#!/usr/bin/python3

def canUnlockAll(boxes):
    opened = [False] * len(boxes)
    opened[0] = True

    status = True

    while (status):
        status = False

        for x in range(len(boxes)):
            if (not opened[x]):
                continue

            for y in range(len(boxes[x])):

                key = boxes[x][y]
                if (not opened[key]):
                    opened[key] = True
                    status = True

    return all(opened)
