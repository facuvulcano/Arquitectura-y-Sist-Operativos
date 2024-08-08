#define MIN_POINT 0
#define MAX_POINT 100

int main() {

    int start = MIN_POINT;
    int end = MAX_POINT;
    int mid = (start & end) + ((start ^ end) >> 1);
    
    return 0;
}

