class Fun{
    private: int x; // accessible only inside the class
    protected: int y; // accessible inside the class and derived classes
    public: int z; // accessible from anywhere through an object
};
class Funny: public Fun{
    private: int u;
    protected: int v;
    public: int w;
    
};
int main(){
    Fun fun;
    Funny funny;
    fun.z = 2;
    // funny.y = 12;
    // funny.u = 5;
    funny.z = 10;
    return 0;
}

/*
x -> only accessible inside Fun
u -> only accessible inside Funny

y -> accessible inside Fun and Funny
v -> accessible inside Funny

z -> accessible from anywhere (object => instance of Fun and Funny)
w -> accessible from anywhere (obhect => instance of Funny)
*/