class Solution {
public:
    int computeArea(int ax1, int ay1, int ax2, int ay2, int bx1, int by1, int bx2, int by2) {
        int l1 = abs(ax1-ax2), b1 = abs(ay1-ay2), l2 = abs(bx1 - bx2), b2 = abs(by1 - by2);
        int l3 = min(ax2, bx2) - max(ax1 , bx1), b3 = min(ay2, by2) - max(ay1, by1);
        if (l3 > 0 && b3 > 0) return l1* b1 + l2*b2 - l3*b3;
        else return l1* b1 + l2*b2;
    }
};
