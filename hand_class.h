//defines the hand class
#include<stdlib.h>

#include<pocket_class.h>
#include<comm_class.h>

class hand{
    public:
        void hand();
        void ~hand(); //verificar como faz destrutor!!!!

        //set
        void set_game_no(int no);
        void set_table_name(char* name);
        void set max_seat(int max);
        void set_button_seat(int seat);
        void set_hero_seat(int seat);
        void set_hero_stack(int stack);
        void set_pocket_cards(); //verificar como passar
        void set_pocket_cards(); //verificar como passar
        void set_community_cards(); //verificar como passar
        void set_hero_bet(int value);
        void set_pot(int value);
        void set_collected(int value);

        //get
        int get_hero_seat():
        int get_hero_stack();
        pocket_cards* get_pocket_cards();
        community_cards* get_community_cards();
        int get_hero_bet();
        int get_collected();

        //pot operations
        void add_hero_bet(int value);
        void add_pot(int value);
        void sub_pot(value); //rake

    private:
        char[15] game_no;
        int bb; //big blind in cents
        char[30] table_name;
        int max_seat;
        int button_seat;
        int hero_seat;
        int hero_stack;
        pocket_cards pocket;
        community_cards comm;
        int hero_bet;
        int pot;
        int rake;
        int collected;
}
