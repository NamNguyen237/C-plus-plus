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

        cout << goc->dulieu << " ";
        duyetTruoc(goc->trai);
        duyetTruoc(goc->phai);
    }

    int demSoNut(Nut *goc) {
        if (goc== nullptr)
            return 0;
        return 1 + demSoNut(goc -> trai) + demSoNut(goc -> phai);
    }

    void duyetGiua(Nut *goc) {
        if (goc -> trai == nullptr)
            cout << goc -> dulieu << " ";
    }
};

int main() {

    binaryTree* T = new binaryTree();

    // Tạo các node
    T->goc = new Nut(5); //tạo nút có giá trị 5

    /*
    Nut* a = new Nut(1);
    Nut* b = new Nut(2);
    Nut* c = new Nut(3);
    Nut* d = new Nut(4);
    */

    // Liên kết cây
    //T ->chenTrai (T->goc ,10); //thêm nút giá trị 10 vào bên trái gốc
    //T -> chenTrai (T->goc -> trai, 12); //thêm nút giá trị 12 vào bên trái 10
    //T->goc->phai = b;
    T -> chenTrai(T -> goc, 7);
    T -> chenPhai(T -> goc, 9);
    T -> chenTrai(T -> goc -> phai, 8);
    T -> chenPhai(T -> goc -> phai, 6);

    //a->trai = d;
    //b->phai = c;

    cout << "Duyet truoc: ";
    T->duyetTruoc(T->goc);

    cout << "Dem so nut: "; cout << T -> demSoNut(T->goc);

    delete T;

    return 0;
}
