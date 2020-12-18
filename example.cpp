#include "HowLog.h"

int main(){
    // Set log level to the lowest. 
    LOG_LEVEL = L_INFO;
    HOW_LOG(L_INFO, "Hellow %s, %d, %f", "World", "1", "3.1415");
    HOW_LOG(L_DEBUG, "Hellow %s, %d, %f", "World", "1", "3.1415");
    HOW_LOG(L_ERROR, "Hellow %s, %d, %f", "World", "1", "3.1415");

    // Set log level to the highest. 
    LOG_LEVEL = L_ERROR;
    HOW_LOG(L_ERROR, "After set LOG_LEVEL = %s, only output log error.", "ERROR");
    HOW_LOG(L_INFO, "Hellow %s, %d, %f", "World", "1", "3.1415");
    HOW_LOG(L_DEBUG, "Hellow %s, %d, %f", "World", "1", "3.1415");
    HOW_LOG(L_ERROR, "Hellow %s, %d, %f", "World", "1", "3.1415");
}