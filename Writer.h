//
// Created by ilya on 16.03.21.
//

#ifndef TESTP_WRITER_H
#define TESTP_WRITER_H

#include <iostream>
/*
 * This class helps to print messages
 * to file or console
 */
class Writer{

public:
    /*
     * method which creates instance of this class
     */
    static Writer create(std::ostream& stream){
        return Writer(stream);
    }
    /*
     * overloaded operator<< which prints message
     * to file or console
     */
    template<typename T>
    Writer &operator<<( T s) {
        stream_ << s<<" ";
        return *this;
    }
    /*
     * makes a line break at the end of the message
     */
    ~Writer(){
        stream_<<"\n";
    }

private:
    explicit Writer(std::ostream& stream):stream_(stream){}

private:
    std::ostream& stream_;
};

#endif //TESTP_WRITER_H
