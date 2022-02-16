
/*COD day 26 05 FEb(Distribute in Circle!)https://www.interviewbit.com/problems/distribute-in-circle/*/


int Solution::solve(int a, int b, int c) {

    a=a-(b-c+1);
    int ans=(b+a)%b;
    if(ans==0) return b;
    return ans;
}
