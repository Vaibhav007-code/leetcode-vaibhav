class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int totalDrink =0;
        int emptyBottle=0;
        while(numBottles>0){
            totalDrink += numBottles;
            emptyBottle += numBottles;

            numBottles = emptyBottle/numExchange;
            emptyBottle = emptyBottle%numExchange;

        }
        return totalDrink;
    }
};