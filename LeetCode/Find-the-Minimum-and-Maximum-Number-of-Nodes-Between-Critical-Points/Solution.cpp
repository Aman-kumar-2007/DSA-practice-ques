// Trasverse all remaining nodes along the linked list 
for(ListNode* Next=head->next->next; Next; i++, Next=Next->next){
    int x=Next->val;// take x
    bool bigger1=x>x1, less1=x<x1;// set current boolean variables
    if((less && bigger1)||(bigger && less1)){// if alternating
        if (sz==0) p0=i;// oth critical point set p0=i
        sz++; // add 1 to sz
        if (p!=-1) minD=min(i-p, minD);// update minD
        p=i;// set p=i
    }
    bigger=bigger1;// update bigger
    less=less1;// update less
    x1=x;// set a1=x for the next iteration
}