import cv2

try:
    img = cv2.imread('/Users/linzuyou/Desktop/unicorn_gundam.png')
except Exception as e:
    print(f"The image loading failed: {e}")

scale_percent = 200
width = int(img.shape[1]*scale_percent/100)
height = int(img.shape[0]*scale_percent/100)

resized = cv2.resize(img, (width, height), interpolation=cv2.INTER_CUBIC)
cv2.imwrite('/Users/linzuyou/Desktop/unicorn_gundam_resized.png', resized)

cv2.imshow('Unicorn Gundam', resized)
cv2.waitKey(0)
cv2.destroyAllWindows()