
import cv2
import numpy as np
import os

points = []
flag = False
def click(event, x, y, flags, param):
    global flag, points
    if event == cv2.EVENT_LBUTTONDOWN:
        points.append((x, y))
    elif event == cv2.EVENT_RBUTTONDOWN:
        flag = True


def dibujo_trayectoria():
    global flag, points
    cv2.namedWindow("Image")
    cv2.setMouseCallback("Image", click)
    image_draw= np.zeros([500,500,3],np.uint8)
    points1 = []
    while True:
        cv2.imshow("Image", image_draw)
        key = cv2.waitKey(1) & 0xFF
        if key == ord("x"):
            break
        if flag:
            flag = False
        
            image_draw= np.zeros([500,500,3],np.uint8)
            [cv2.circle(image_draw, (punto[0], punto[1]), 3, [0, 0, 255], -1) for punto in points1 ]
            
        if len(points) > 0:
            points1.append((points[0][0],points[0][1]))
            points= []
        
            image_draw= np.zeros([500,500,3],np.uint8)
            [cv2.circle(image_draw, (punto[0], punto[1]), 3, [0, 0, 255], -1) for punto in points1 ]

    file = open("path.txt", "w")

    [file.write(str(i[0])+"  "+ str(i[1])+"\n") for i in points1]

    file.close()


dibujo_trayectoria()