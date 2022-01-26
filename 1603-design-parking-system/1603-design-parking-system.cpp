class ParkingSystem {
public:
    int slotb;
    int slotm;
    int slots;
    ParkingSystem(int big, int medium, int small) {
        slotb=big;
        slotm=medium;
        slots=small;
    }
    bool addCar(int carType) {
        if(carType==1){
            if(slotb>0){
                slotb--;
               return true;
            }
            else
                return false;  
        }
        else if(carType==2){
            if(slotm>0){
                slotm--;
               return true;
            }
            else
                return false;
        }
        else if(carType==3){
            if(slots>0){
                slots--;
               return true;
            }
            else
                return false;
        }
     return false;
    }
};

/**
 * Your ParkingSystem object will be instantiated and called as such:
 * ParkingSystem* obj = new ParkingSystem(big, medium, small);
 * bool param_1 = obj->addCar(carType);
 */