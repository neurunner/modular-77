#ifndef MATH77_H
#define MATH77_H


class Math77
{
public:
    Math77();
    /* Dispatchers - 'schedule', 'chunk' need here
       option 'reduction', use a pragma access fields - 'private', 'shared' need here.*/
    /* #Pragma omp parallel need here */

    /* 1) multiplyArrOnVec) >> In here place should be countings
       for two dimensional array to third two dimensional array. */
    /* 2) findBy) >> Searching sought argument(s) in array
       matrix and other collections. */
    /* 3) findByRange) >> Maby it be fibonacci or other method. */

    void /* int[][] */ findNotNullElements(int twoDimArr);
    void /* float[][] or vector<float, float> */ multiplyArrOnVec(int twoDimArr, int vector);
    void /* sought type */ findBy(int sought, int array);
    void /* range type */ findByRange(int first, int second);
};

#endif // MATH77_H
