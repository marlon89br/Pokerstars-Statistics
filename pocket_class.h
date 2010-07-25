//defines the pocket class, that will hold the hero's pocket cards
#include<card.h>

class pocket_cards{
    public:
        void set_pocket_card(int face, int suit, int index);
        card* get_pocket_card(int index);

    private:
        card p_card[2];
}
