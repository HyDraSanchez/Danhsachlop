#include <iostream>
#include <cstdlib>
#include <ctime>
int random,a,b;
using namespace std;
int main()
{
    cout << "Ban muon chon chuc nang nao?" <<endl;
    cout << "1.So thu tu hoc sinh 10A2."<<endl;
    cout << "2.Random ten do bai." <<endl;
    cout << "(Nhan phim 1 hoac 2 de chon chuc nang)";
    cin >>a;
    if (a==2)
    {
    cout << "Ban da chon chuc nang 2."<<endl;
    srand((unsigned)time(0));
    random = rand()% 44 +1;
    switch (random)
        {

            case 1:
            cout << "So 1: Ho Gia An."<<endl;
            break;
            case 2:
            cout << "So 2: Do Tran Thu Anh"<<endl;
            break;
            case 3:
            cout << "So 3: Huynh Ngoc Bao Anh"<<endl;
            break;
            case 4:
            cout << "So 4: Le Hoai Bao"<<endl;
            break;
            case 5:
            cout << "So 5: Tran Linh Chi"<<endl;
            break;
            case 6:
            cout << "So 6: Do Thi Thanh Dan"<<endl;
            break;
            case 7:
            cout << "So 7: Phan Le Thanh Dat"<<endl;
            break;
            case 8:
            cout << "So 8: NONE"<<endl;
            break;
            case 9:
            cout << "So 9: Ngo Tuan Duan"<<endl;
            break;
            case 10:
            cout << "So 10: Nguyen Bich Han"<<endl;
            break;
            case 11:
            cout << "So 11: Dang Nguyen Gia Han"<<endl;
            break;
            case 12:
            cout << "So 12: Nguyen Le Han"<<endl;
            break;
            case 13:
            cout << "So 13: Nguyen Tran Ngoc Han"<<endl;
            break;
            case 14:
            cout << "So 14: Tran Gia Hien"<<endl;
            break;
            case 15:
            cout << "So 15: Ho Ngoc Hoai"<<endl;
            break;
            case 16:
            cout << "So 16: Nguyen Dao Bao Hung"<<endl;
            break;
            case 17:
            cout << "So 17: Huynh Van Hung"<<endl;
            break;
            case 18:
            cout << "So 18: Tran Gia Huy"<<endl;
            break;
            case 19:
            cout << "So 19: Vo Ngoc Huyen"<<endl;
            break;
            case 20:
            cout << "So 20: Le Gia Bao Khanh"<<endl;
            break;
            case 21:
            cout << "So 21: Nguyen Quoc Lam"<<endl;
            break;
            case 22:
            cout << "So 22: Tu Le Nhat Linh"<<endl;
            break;
            case 23:
            cout << "So 23: Nguyen Minh Loc"<<endl;
            break;
            case 24:
            cout << "So 24: Le Thi Hong Ly"<<endl;
            break;
            case 25:
            cout << "So 25: Bui Pha My"<<endl;
            break;
            case 26:
            cout << "So 26: Nguyen Dang Nhat"<<endl;
            break;
            case 27:
            cout << "So 27: Huynh Nguyen Gia Phat"<<endl;
            break;
            case 28:
            cout << "So 28: Nguyen Trong Phu"<<endl;
            break;
            case 29:
            cout << "So 29: Tran Le Quyen"<<endl;
            break;
            case 30:
            cout << "So 30: Nguyen Phuong Quynh"<<endl;
            break;
            case 31:
            cout << "So 31: Vo Nhu Quynh"<<endl;
            break;
            case 32:
            cout << "So 32: Nguyen Nhu Quynh"<<endl;
            break;
            case 33:
            cout << "So 33: Vo Thanh Tan"<<endl;
            break;
            case 34:
            cout << "So 34: Luu Duc Thanh"<<endl;
            break;
            case 35:
            cout << "So 35: Tran Thi Minh Thu"<<endl;
            break;
            case 36:
            cout << "So 36: Tran Minh Tien"<<endl;
            break;
            case 37:
            cout << "So 37: Le Nguyen Ngoc Tran"<<endl;
            break;
            case 38:
            cout << "So 38: Vo Huynh Nha Truc"<<endl;
            break;
            case 39:
            cout << "So 39: Le Thanh Truc"<<endl;
            break;
            case 40:
            cout << "So 40: Tran Thanh Tung"<<endl;
            break;
            case 41:
            cout << "So 41: Trinh Duy Uyen"<<endl;
            break;
            case 42:
            cout << "So 42: Le Thi Bich Van"<<endl;
            break;
            case 43:
            cout << "So 43: Chau Tu Vy"<<endl;
            break;
            case 44:
            cout << "So 44: Tran BAo Xuyen"<<endl;
            break;
            case 45:
            cout << "So 45: Mai Nhu Y"<<endl;
            break;
        }
    }
    else if (a==1)
        {
            cout << "Ban da chon chuc nang 1."<<endl;
            cout << "Hay nhap mot so thu tu hoc sinh lop 10A2"<<endl;
            cin >> b;
            switch (b)
                {

                    case 1:
                    cout << "So 1: Ho Gia An."<<endl;
                    break;
                    case 2:
                    cout << "So 2: Do Tran Thu Anh"<<endl;
                    break;
                    case 3:
                    cout << "So 3: Huynh Ngoc Bao Anh"<<endl;
                    break;
                    case 4:
                    cout << "So 4: Le Hoai Bao"<<endl;
                    break;
                    case 5:
                    cout << "So 5: Tran Linh Chi"<<endl;
                    break;
                    case 6:
                    cout << "So 6: Do Thi Thanh Dan"<<endl;
                    break;
                    case 7:
                    cout << "So 7: Phan Le Thanh Dat"<<endl;
                    break;
                    case 8:
                    cout << "So 8: NONE"<<endl;
                    break;
                    case 9:
                    cout << "So 9: Ngo Tuan Duan"<<endl;
                    break;
                    case 10:
                    cout << "So 10: Nguyen Bich Han"<<endl;
                    break;
                    case 11:
                    cout << "So 11: Dang Nguyen Gia Han"<<endl;
                    break;
                    case 12:
                    cout << "So 12: Nguyen Le Han"<<endl;
                    break;
                    case 13:
                    cout << "So 13: Nguyen Tran Ngoc Han"<<endl;
                    break;
                    case 14:
                    cout << "So 14: Tran Gia Hien"<<endl;
                    break;
                    case 15:
                    cout << "So 15: Ho Ngoc Hoai"<<endl;
                    break;
                    case 16:
                    cout << "So 16: Nguyen Dao Bao Hung"<<endl;
                    break;
                    case 17:
                    cout << "So 17: Huynh Van Hung"<<endl;
                    break;
                    case 18:
                    cout << "So 18: Tran Gia Huy"<<endl;
                    break;
                    case 19:
                    cout << "So 19: Vo Ngoc Huyen"<<endl;
                    break;
                    case 20:
                    cout << "So 20: Le Gia Bao Khanh"<<endl;
                    break;
                    case 21:
                    cout << "So 21: Nguyen Quoc Lam"<<endl;
                    break;
                    case 22:
                    cout << "So 22: Tu Le Nhat Linh"<<endl;
                    break;
                    case 23:
                    cout << "So 23: Nguyen Minh Loc"<<endl;
                    break;
                    case 24:
                    cout << "So 24: Le Thi Hong Ly"<<endl;
                    break;
                    case 25:
                    cout << "So 25: Bui Pha My"<<endl;
                    break;
                    case 26:
                    cout << "So 26: Nguyen Dang Nhat"<<endl;
                    break;
                    case 27:
                    cout << "So 27: Huynh Nguyen Gia Phat"<<endl;
                    break;
                    case 28:
                    cout << "So 28: Nguyen Trong Phu"<<endl;
                    break;
                    case 29:
                    cout << "So 29: Tran Le Quyen"<<endl;
                    break;
                    case 30:
                    cout << "So 30: Nguyen Phuong Quynh"<<endl;
                    break;
                    case 31:
                    cout << "So 31: Vo Nhu Quynh"<<endl;
                    break;
                    case 32:
                    cout << "So 32: Nguyen Nhu Quynh"<<endl;
                    break;
                    case 33:
                    cout << "So 33: Vo Thanh Tan"<<endl;
                    break;
                    case 34:
                    cout << "So 34: Luu Duc Thanh"<<endl;
                    break;
                    case 35:
                    cout << "So 35: Tran Thi Minh Thu"<<endl;
                    break;
                    case 36:
                    cout << "So 36: Tran Minh Tien"<<endl;
                    break;
                    case 37:
                    cout << "So 37: Le Nguyen Ngoc Tran"<<endl;
                    break;
                    case 38:
                    cout << "So 38: Vo Huynh Nha Truc"<<endl;
                    break;
                    case 39:
                    cout << "So 39: Le Thanh Truc"<<endl;
                    break;
                    case 40:
                    cout << "So 40: Tran Thanh Tung"<<endl;
                    break;
                    case 41:
                    cout << "So 41: Trinh Duy Uyen"<<endl;
                    break;
                    case 42:
                    cout << "So 42: Le Thi Bich Van"<<endl;
                    break;
                    case 43:
                    cout << "So 43: Chau Tu Vy"<<endl;
                    break;
                    case 44:
                    cout << "So 44: Tran BAo Xuyen"<<endl;
                    break;
                    case 45:
                    cout << "So 45: Mai Nhu Y"<<endl;
                    break;
                    }
        }
        else cout << "Chuc nang ban chon khong hop le!";
        system("pause");
    return 0;
}
