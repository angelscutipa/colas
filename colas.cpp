# colas
#include <iostream>

using namespace std;

template <class T>
class nodo
{
    public:
        T valor;
        nodo* sig;
        nodo(T a);
        virtual ~nodo();
    protected:
    private:
};

template <class T>

nodo::nodo(T a)
{
    valor=a;
    sig=NULL;
    //ctor
}

nodo::~nodo()
{
    //dtor
}

template <class T>

class cola
{
    public:
        nodo* primero;
        nodo* ultimo;
        cola();
        void add(T a);
        void print();
        void delet();
        virtual ~cola();
    protected:
    private:
};
template <class T>

using namespace std;

cola<T>::cola()
{
    primero=ultimo=NULL;
    //ctor
}

void cola<T>::add(T a)
{
    if(!primero){
        primero=new nodo(a);
        ultimo=primero;
    }
    else{
        nodo* temp;
        temp=new nodo(a);
        ultimo->sig=temp;
        ultimo=temp;
    }
}

void cola<T>::delet()
{
    nodo* temp;
    temp=primero->sig;
    primero=temp;
}

void cola<T>::print()
{
    nodo* temp=primero;
    while(temp!=ultimo->sig){
        cout<<temp->valor<<endl;
        temp=temp->sig;
    }
}

cola::~cola()
{
}
int main()
{
template <class T>

int main()
{
    cola <int> a;
    a.add(6);
    a.add(8);
    a.add(5);
    a.add(3);
    a.print();
    cout<<"borrar un elemeto de la lista: "<<endl;
    a.delet();
    a.print();
    cout << "Hello world!" << endl;
    return 0;
}  

}
