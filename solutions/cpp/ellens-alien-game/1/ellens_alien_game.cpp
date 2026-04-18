namespace targets {
// TODO: Insert the code for the alien class here
class Alien {
    int health=3;
    public:
    int x_coordinate;
    int y_coordinate;
        Alien(int x,int y){
            x_coordinate=x;
            y_coordinate=y;
        }
        int get_health(){
            return health;
        }
        bool hit(){
            health--;
            if (health<0){
                health=0;
            }
            return true;
        }
        bool is_alive(){
            if (health==0){
                return false;
            }
            return true;
        }
        bool teleport(int x_new,int y_new){
            x_coordinate=x_new;
            y_coordinate=y_new;
            return true;
        }
        bool collision_detection(Alien& al2){
            if (al2.x_coordinate==x_coordinate && al2.y_coordinate==y_coordinate){
                return true;
            }
            return false;
        }
};
}  // namespace targets
