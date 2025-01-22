# cv2 : image manupulation

import cv2
import os

cwd = os.getcwd()
print(cwd)

# read file
img = cv2.imread(os.path.join(cwd,"ss.pgm") , 0)
img = 255-img
# write back to file
cv2.imwrite(os.path.join(cwd, "ss-out.pgm") , img)
