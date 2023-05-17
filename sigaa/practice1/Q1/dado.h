#pragma once

class Dado {
    private:
        int numJogadas;
        int lados[6] = {1, 2, 3, 4, 5, 6};
    
    public:
        int jogarDado();

}