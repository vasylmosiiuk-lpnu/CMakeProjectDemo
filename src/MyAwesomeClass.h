//
// Created by vasyl on 14/03/2023.
//

#ifndef CMAKEPROJECTDEMO_MYAWESOMECLASS_H
#define CMAKEPROJECTDEMO_MYAWESOMECLASS_H

namespace vmosiiuk {

    class MyAwesomeClass {
    public:
        explicit MyAwesomeClass(int arg1);

        MyAwesomeClass(int arg1, double arg2);

        int MethodA(float x, float y);
    };

} // vmosiiuk

#endif //CMAKEPROJECTDEMO_MYAWESOMECLASS_H
