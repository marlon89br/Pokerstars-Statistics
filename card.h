// defines the card class
#include<stdlib.h>

#define s 1
#define c 2
#define h 3
#define d 4

#define T 10
#define J 11
#define Q 12
#define K 13
#define A 14

class card{
    public:
        void set_face(int no);
        int get_face();
        void set_suit(int st);
        int get_suit();

    private:
        int face;
        int suit;
}
