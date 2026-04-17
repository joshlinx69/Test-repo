import cv2

try:
    img = cv2.imread('C:\\Users\\joshlin69x69\\Pictures\\penny.jpg')
except Exception as e:
    print(f"The image loading failed: {e}")

cv2.imshow('Penny the Ginger Cat', img)
cv2.waitKey(0)
cv2.destroyAllWindows()