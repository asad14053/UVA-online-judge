#include<bits/stdc++.h>
using namespace std;
struct node
{
    int value;
    struct node *next;

}*head=NULL;
int display()
{
    cout<<"list:"<<endl;
    struct node *ptr,*ptr1;
    if(head==NULL) cout<<" empty"<<endl;
    else
    {
        ptr1=head;
        printf("head = %x\n",head);
        while(ptr1!=NULL)
        {
            cout<<ptr1<<  " "<<ptr1->value<<" "<< ptr1->next<<"-->"<<endl;
            ptr1=ptr1->next;
        }
        cout<<endl;

    }
    return 0;
}
int at_end()
{
    int a;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    ptr->value=a;
    ptr->next=NULL;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr1=head;
        while(ptr1->next!=NULL) ptr1=ptr1->next;
        ptr1->next=ptr;

    }
    return 0;
}
int before_mid()
{
    int a,b;
    cout<<"enter value & position value"<<endl;
    cin>>a>>b;
    struct node *ptr,*ptr1,*ptr2,*ptr3;
    ptr=(struct node*)malloc(sizeof(struct node));
    ptr->value=a;
    ptr->next=NULL;
    ptr1=head;
    while(ptr1->value!=b)
    {
        ptr2=ptr1;
        ptr1=ptr1->next;
    }
    cout<<ptr2->value<<" "<<ptr1->value<<endl;

    ptr->next=ptr2->next;
    ptr2->next=ptr;
    return 0;
}


int after_mid()
{
    int a,b;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cout<<"input & search value:"<<endl;
    cin>>a>>b;
    ptr->value=a;
    ptr->next=NULL;
    ptr1=head;
    if(ptr1!=NULL)
    {
        while(ptr1->value!=b)
        {
            ptr1=ptr1->next;
        }
        if(ptr1!=NULL)
        {
            ptr->next=ptr1->next;
            ptr1->next=ptr;

        }

    }
    return 0;
}
int at_first()
{
    int a;
    struct node *ptr,*ptr1;
    ptr=(struct node*)malloc(sizeof(struct node));
    cin>>a;
    ptr->value=a;
    ptr->next=NULL;
    if(head==NULL)
        head=ptr;
    else
    {
        ptr->next=head;
        head=ptr;
    }
    return 0;

}
int main()
{
   // struct node *head,*head1,*head2,*ptr,*ptr1;
    int x;
    head=NULL;
    cout<<"       -------------------------my project--------------------------"<<endl<<endl;
    while(1)
    {


        cout<<"\n1=end ,2=mid after ,3=before mid ,4=first ,5=search \n6=split ,7=merge 8=remove ,9=replace ,10=display ,else break;\nenter choice :"<<endl;
        cin>>x;

        if(x==1) at_end();
        else if(x==2) after_mid();
        else if(x==3) before_mid();
        else if(x==4) at_first();
        else if(x==5) display();
        else break;
    }
    return 0;
}


