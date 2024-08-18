'''Đề bài yêu cầu bạn nhập : Dòng 1 là số nguyên X, dòng 2 là số nguyên Y, dòng 3 là kí tự C, dòng 4 là số thực float F,
dòng 5 là số thực double D. Nhiệm vụ của bạn là in ra 5 dòng. Dòng 1 in X, dòng 2 in Y, dòng 3 in C, dòng 4 in F với 2 số
đàng sau dấu phẩy, dòng 5 in D với 9 số sau dấu phẩy,'''
if __name__ == '__main__':
    x = int(input('Nhap so nguyen X: '))
    y = int(input('Nhap so nguyen Y: '))
    c = input('Nhap ki tu c: ')
    f = float(input('Nhap so thuc f: '))
    d = float(input('Nhap so thuc double d: '))  # `float` đã đại diện cho số thực trong Python
    print (x)
    print (y)
    print (c)
    print('%.2f' % f)  # In `x` dưới dạng số thực với 2 chữ số thập phân
    print ('%.9f' %d)
