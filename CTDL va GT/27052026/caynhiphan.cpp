#include <iostream>

using namespace std;

class Nut {
public:
    int dulieu;
    Nut* trai;
    Nut* phai;

    Nut(int dulieu) {
        this->dulieu = dulieu;
        trai = nullptr;
        phai = nullptr;
    }
};

class binaryTree {
public:
    Nut* goc;

    binaryTree() {
        goc = nullptr;
    }

    // Hàm xóa cây
    void xoa(Nut* nutHienTai) {
        if (nutHienTai == nullptr)
            return;

        xoa(nutHienTai->trai);
        xoa(nutHienTai->phai);

        delete nutHienTai;
    }

    ~binaryTree() {
        xoa(goc);
    }

    void chenTrai (Nut *goc, int nutmoi){
        Nut *moi = new Nut (nutmoi);
        if (goc == nullptr)
            goc = moi;
        else
            goc -> trai = moi;
        return;

    }

    void chenPhai (Nut *goc, int nutmoi) {
        Nut *moi = new Nut (nutmoi);
        if (goc == nullptr)
            goc = moi;
        else
            goc -> phai = moi;
        return;
    }

    // Duyệt trước
    void duyetTruoc(Nut* goc) {
        if (goc == nullptr) {
            return;
        }

        cout << goc -> dulieu << " ";
        duyetTruoc(goc->trai);
        duyetTruoc(goc->phai);
    }

    int demSoNut(Nut *goc) {
        if (goc== nullptr)
            return 0;
        return 1 + demSoNut(goc -> trai) + demSoNut(goc -> phai);
    }

    void duyetGiua(Nut *goc) {
        if (goc -> trai == nullptr || goc -> phai == nullptr) {
            cout << goc -> dulieu << " ";
        }

    }

    void DemSoLonHon10(Nut *goc, int &dem) {
        if (goc == nullptr) {
            return;
        }
        if (goc -> dulieu > 10) {
            dem++;
        }
        DemSoLonHon10(goc->trai, dem);
        DemSoLonHon10(goc->phai, dem);
    }
};

int main() {

    binaryTree* T = new binaryTree();

    // Tạo các node
    T->goc = new Nut(5); //tạo nút có giá trị 5
    T -> chenTrai(T -> goc, 15);
    T -> chenPhai(T -> goc, 30);
    T -> chenPhai(T -> goc -> trai, 40);
    T -> chenTrai(T -> goc -> phai, 29);

    cout << "\nDuyet truoc: ";
    T -> duyetTruoc(T -> goc);

    cout << "\nDem so nut: "; cout << T -> demSoNut(T->goc);

    int dem = 0;
    T -> DemSoLonHon10(T->goc, dem);
    cout << "\nSo nut > 10: "; cout << dem;

    delete T;

    return 0;
}
