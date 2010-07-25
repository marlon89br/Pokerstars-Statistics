//defines the community class, that will hold the community cards
#include<card.h>

class community_cards{
    public:
        void set_flop(int face, int suit, int index);
        void set_turn(int face, int suit);
        void set_river(int face, int suit);
        card* get_flop_card(int index);
        card* get_turn_card();
        card* get_river_card();

    private:
        card flop[3];
        card turn;
        card river;
}
