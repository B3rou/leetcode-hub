int mySqrt(int x) {
    if (x == 0 || x == 1)
    return(x);

    long long root, left = 0, right = x, mid;

    while (left <= right){
        mid = (left + right)/2;
        if (mid*mid == x)
        return(mid);

        if (mid*mid < x){
            root = mid;
            left = mid+1;
        }
        else{
            right = mid-1;
        }
    }
        return(root);
}