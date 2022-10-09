#include <iostream>
using namespace std;
typedef
struct btnode
{
    struct btnode *lc;
    int data;
    struct btnode *rc;
}*btptr;
struct stack
{
    int size;
    int top;
    btptr elements[50];
};
void push(struct stack &s,btptr x)
{
    if(s.top==s.size-1)
        cout<<"stack is full";
    else
    {
        s.top=s.top+1;
        s.elements[s.top]=x;
    }
}
btptr pop(struct stack &s)
{
    btptr t=new(btnode);
    if(s.top==-1)
        cout<<"stack is empty";
    else
    {
        t=s.elements[s.top];
        s.top=s.top-1;
    }
    return t;
}
void insert(btptr &T,int k)
{
    if(T==NULL)
    {
        T=new(btnode);
        T->data=k;
        T->lc=NULL;
        T->rc=NULL;
    }
        //cout<<"enter l child for "<<k<<endl;
        int ch;
        cin>>ch;
        if(ch!=0)
        {
            insert(T->lc,ch);
        }
       // cout<<"enter r child for "<<k<<endl;
        cin>>ch;
        if(ch!=0)
        {
            insert(T->rc,ch);
        }
}
int lesscheck(btptr t1,struct stack s)
{
    while(s.top!=-1)
    {
        if(pop(s)->data>t1->data)
            return 0;
    }
    return 1;
}
int check(btptr t,struct stack &s)
{
    s.top=-1;
    struct stack s2;
    s2.top=-1;
    s2.size=15;
    while(1)
    {
        if(!lesscheck(t,s2))
            return 0;
        if(s.top!=-1)
        {
            btptr temp=pop(s);
            if(temp->data>t->data)
            {
                push(s,temp);
                push(s,t);
            }
            else
            {
                return 0;
            }
        }
        else
        {
            push(s,t);
        }
        if(t->lc!=NULL)
        {
             t=t->lc;
        }
        else
        {
            if(s.top==-1)
            {
                return 1;
            }
            else
            {
                btptr temp=pop(s);
                while(temp->rc==NULL)
                {
                    if(s.top!=-1)
                        temp=pop(s);
                    else
                    {
                        return 1;
                    }
                }
                push(s2,temp);
                if(temp->data < temp->rc->data)
                {
                    t=temp->rc;
                }
                else
                {
                    return 0;
                }
            }
        }
    }
}
void noofnodes(btptr t,int &m)
{
    if(t!=NULL)
    {
        m++;
        noofnodes(t->lc,m);
        noofnodes(t->rc,m);
    }
}
void bstinbt(btptr t,btptr &temp,int &n,struct stack &s)
{
    if(t!=NULL)
    {
        if(check(t,s))
        {
            int m=0;
            noofnodes(t,m);
            if(m>n)
            {
                temp=t;
                n=m;
            }
        }
        bstinbt(t->lc,temp,n,s);
        bstinbt(t->rc,temp,n,s);

    }
}
void ldr(btptr t)
{
    if(t!=NULL)
    {
        ldr(t->lc);
        cout<<t->data<<" ";
        ldr(t->rc);
    }
}
int main()
{
    btptr T=NULL;
    int n;
    cin>>n;
    insert(T,n);
    btptr temp=NULL;
    struct stack s;
    s.top=-1;
    s.size=15;
    n=0;
    bstinbt(T,temp,n,s);
    ldr(temp);
    return 0;
}
// 27 18 15 9 0 0 0 22 12 8 0 0 0 45 32 0 0 72 0 0 36 25 0 0 63 54 0 0 0
