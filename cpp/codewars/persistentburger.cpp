//https://www.codewars.com/kata/55bf01e5a717a0d57e0000ec

int persistence(long long value){
    int steps = 0;
    while (value/10 != 0){
        long long counter = 1;
        for(; value != 0;value = value/10){
            counter *= value%10;
        }
        value = counter;
        steps++;
    }
    return steps;
}