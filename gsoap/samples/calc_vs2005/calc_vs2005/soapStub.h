/* soapStub.h
   Generated by gSOAP 2.8.80 for calc.h

gSOAP XML Web services tools
Copyright (C) 2000-2018, Robert van Engelen, Genivia Inc. All Rights Reserved.
The soapcpp2 tool and its generated software are released under the GPL.
This program is released under the GPL with the additional exemption that
compiling, linking, and/or using OpenSSL is allowed.
--------------------------------------------------------------------------------
A commercial use license is available from Genivia Inc., contact@genivia.com
--------------------------------------------------------------------------------
*/


#ifndef soapStub_H
#define soapStub_H
#include "stdsoap2.h"
#if GSOAP_VERSION != 20880
# error "GSOAP VERSION 20880 MISMATCH IN GENERATED CODE VERSUS LIBRARY CODE: PLEASE REINSTALL PACKAGE"
#endif


/******************************************************************************\
 *                                                                            *
 * Types with Custom Serializers                                              *
 *                                                                            *
\******************************************************************************/


/******************************************************************************\
 *                                                                            *
 * Classes, Structs and Unions                                                *
 *                                                                            *
\******************************************************************************/

struct ns__addResponse;	/* calc.h:100 */
struct ns__add;	/* calc.h:100 */
struct ns__subResponse;	/* calc.h:103 */
struct ns__sub;	/* calc.h:103 */
struct ns__mulResponse;	/* calc.h:106 */
struct ns__mul;	/* calc.h:106 */
struct ns__divResponse;	/* calc.h:109 */
struct ns__div;	/* calc.h:109 */
struct ns__powResponse;	/* calc.h:112 */
struct ns__pow;	/* calc.h:112 */

/* calc.h:100 */
#ifndef SOAP_TYPE_ns__addResponse
#define SOAP_TYPE_ns__addResponse (10)
/* complex XML schema type 'ns:addResponse': */
struct SOAP_CMAC ns__addResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:double' */
        double *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__addResponse */
        long soap_type() const { return SOAP_TYPE_ns__addResponse; }
        /** Constructor with member initializations */
        ns__addResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__addResponse * SOAP_FMAC2 soap_instantiate_ns__addResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:100 */
#ifndef SOAP_TYPE_ns__add
#define SOAP_TYPE_ns__add (11)
/* complex XML schema type 'ns:add': */
struct SOAP_CMAC ns__add {
      public:
        /** Required element 'a' of XML schema type 'xsd:double' */
        double a;
        /** Required element 'b' of XML schema type 'xsd:double' */
        double b;
      public:
        /** Return unique type id SOAP_TYPE_ns__add */
        long soap_type() const { return SOAP_TYPE_ns__add; }
        /** Constructor with member initializations */
        ns__add() : a(), b() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__add * SOAP_FMAC2 soap_instantiate_ns__add(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:103 */
#ifndef SOAP_TYPE_ns__subResponse
#define SOAP_TYPE_ns__subResponse (13)
/* complex XML schema type 'ns:subResponse': */
struct SOAP_CMAC ns__subResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:double' */
        double *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__subResponse */
        long soap_type() const { return SOAP_TYPE_ns__subResponse; }
        /** Constructor with member initializations */
        ns__subResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__subResponse * SOAP_FMAC2 soap_instantiate_ns__subResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:103 */
#ifndef SOAP_TYPE_ns__sub
#define SOAP_TYPE_ns__sub (14)
/* complex XML schema type 'ns:sub': */
struct SOAP_CMAC ns__sub {
      public:
        /** Required element 'a' of XML schema type 'xsd:double' */
        double a;
        /** Required element 'b' of XML schema type 'xsd:double' */
        double b;
      public:
        /** Return unique type id SOAP_TYPE_ns__sub */
        long soap_type() const { return SOAP_TYPE_ns__sub; }
        /** Constructor with member initializations */
        ns__sub() : a(), b() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__sub * SOAP_FMAC2 soap_instantiate_ns__sub(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:106 */
#ifndef SOAP_TYPE_ns__mulResponse
#define SOAP_TYPE_ns__mulResponse (16)
/* complex XML schema type 'ns:mulResponse': */
struct SOAP_CMAC ns__mulResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:double' */
        double *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__mulResponse */
        long soap_type() const { return SOAP_TYPE_ns__mulResponse; }
        /** Constructor with member initializations */
        ns__mulResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__mulResponse * SOAP_FMAC2 soap_instantiate_ns__mulResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:106 */
#ifndef SOAP_TYPE_ns__mul
#define SOAP_TYPE_ns__mul (17)
/* complex XML schema type 'ns:mul': */
struct SOAP_CMAC ns__mul {
      public:
        /** Required element 'a' of XML schema type 'xsd:double' */
        double a;
        /** Required element 'b' of XML schema type 'xsd:double' */
        double b;
      public:
        /** Return unique type id SOAP_TYPE_ns__mul */
        long soap_type() const { return SOAP_TYPE_ns__mul; }
        /** Constructor with member initializations */
        ns__mul() : a(), b() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__mul * SOAP_FMAC2 soap_instantiate_ns__mul(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:109 */
#ifndef SOAP_TYPE_ns__divResponse
#define SOAP_TYPE_ns__divResponse (19)
/* complex XML schema type 'ns:divResponse': */
struct SOAP_CMAC ns__divResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:double' */
        double *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__divResponse */
        long soap_type() const { return SOAP_TYPE_ns__divResponse; }
        /** Constructor with member initializations */
        ns__divResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__divResponse * SOAP_FMAC2 soap_instantiate_ns__divResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:109 */
#ifndef SOAP_TYPE_ns__div
#define SOAP_TYPE_ns__div (20)
/* complex XML schema type 'ns:div': */
struct SOAP_CMAC ns__div {
      public:
        /** Required element 'a' of XML schema type 'xsd:double' */
        double a;
        /** Required element 'b' of XML schema type 'xsd:double' */
        double b;
      public:
        /** Return unique type id SOAP_TYPE_ns__div */
        long soap_type() const { return SOAP_TYPE_ns__div; }
        /** Constructor with member initializations */
        ns__div() : a(), b() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__div * SOAP_FMAC2 soap_instantiate_ns__div(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:112 */
#ifndef SOAP_TYPE_ns__powResponse
#define SOAP_TYPE_ns__powResponse (22)
/* complex XML schema type 'ns:powResponse': */
struct SOAP_CMAC ns__powResponse {
      public:
        /** Optional element 'result' of XML schema type 'xsd:double' */
        double *result;
      public:
        /** Return unique type id SOAP_TYPE_ns__powResponse */
        long soap_type() const { return SOAP_TYPE_ns__powResponse; }
        /** Constructor with member initializations */
        ns__powResponse() : result() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__powResponse * SOAP_FMAC2 soap_instantiate_ns__powResponse(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:112 */
#ifndef SOAP_TYPE_ns__pow
#define SOAP_TYPE_ns__pow (23)
/* complex XML schema type 'ns:pow': */
struct SOAP_CMAC ns__pow {
      public:
        /** Required element 'a' of XML schema type 'xsd:double' */
        double a;
        /** Required element 'b' of XML schema type 'xsd:double' */
        double b;
      public:
        /** Return unique type id SOAP_TYPE_ns__pow */
        long soap_type() const { return SOAP_TYPE_ns__pow; }
        /** Constructor with member initializations */
        ns__pow() : a(), b() { }
        /** Friend allocator */
        friend SOAP_FMAC1 ns__pow * SOAP_FMAC2 soap_instantiate_ns__pow(struct soap*, int, const char*, const char*, size_t*);
};
#endif

/* calc.h:113 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (24)
/* SOAP_ENV__Header: */
struct SOAP_CMAC SOAP_ENV__Header {
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Header */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Header; }
        /** Constructor with member initializations */
        SOAP_ENV__Header() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Header * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Header(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:113 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (25)
/* Type SOAP_ENV__Code is a recursive data type, (in)directly referencing itself through its (base or derived class) members */
/* SOAP_ENV__Code: */
struct SOAP_CMAC SOAP_ENV__Code {
      public:
        /** Optional element 'SOAP-ENV:Value' of XML schema type 'xsd:QName' */
        char *SOAP_ENV__Value;
        /** Optional element 'SOAP-ENV:Subcode' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Subcode;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Code */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Code; }
        /** Constructor with member initializations */
        SOAP_ENV__Code() : SOAP_ENV__Value(), SOAP_ENV__Subcode() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Code * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Code(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:113 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (27)
/* SOAP_ENV__Detail: */
struct SOAP_CMAC SOAP_ENV__Detail {
      public:
        char *__any;
        /** Any type of element 'fault' assigned to fault with its SOAP_TYPE_<typename> assigned to __type */
        /** Do not create a cyclic data structure throught this member unless SOAP encoding or SOAP_XML_GRAPH are used for id-ref serialization */
        int __type;
        void *fault;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Detail */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Detail; }
        /** Constructor with member initializations */
        SOAP_ENV__Detail() : __any(), __type(), fault() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Detail * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Detail(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:113 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (30)
/* SOAP_ENV__Reason: */
struct SOAP_CMAC SOAP_ENV__Reason {
      public:
        /** Optional element 'SOAP-ENV:Text' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Text;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Reason */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Reason; }
        /** Constructor with member initializations */
        SOAP_ENV__Reason() : SOAP_ENV__Text() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Reason * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Reason(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/* calc.h:113 */
#ifndef WITH_NOGLOBAL
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (31)
/* SOAP_ENV__Fault: */
struct SOAP_CMAC SOAP_ENV__Fault {
      public:
        /** Optional element 'faultcode' of XML schema type 'xsd:QName' */
        char *faultcode;
        /** Optional element 'faultstring' of XML schema type 'xsd:string' */
        char *faultstring;
        /** Optional element 'faultactor' of XML schema type 'xsd:string' */
        char *faultactor;
        /** Optional element 'detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *detail;
        /** Optional element 'SOAP-ENV:Code' of XML schema type 'SOAP-ENV:Code' */
        struct SOAP_ENV__Code *SOAP_ENV__Code;
        /** Optional element 'SOAP-ENV:Reason' of XML schema type 'SOAP-ENV:Reason' */
        struct SOAP_ENV__Reason *SOAP_ENV__Reason;
        /** Optional element 'SOAP-ENV:Node' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Node;
        /** Optional element 'SOAP-ENV:Role' of XML schema type 'xsd:string' */
        char *SOAP_ENV__Role;
        /** Optional element 'SOAP-ENV:Detail' of XML schema type 'SOAP-ENV:Detail' */
        struct SOAP_ENV__Detail *SOAP_ENV__Detail;
      public:
        /** Return unique type id SOAP_TYPE_SOAP_ENV__Fault */
        long soap_type() const { return SOAP_TYPE_SOAP_ENV__Fault; }
        /** Constructor with member initializations */
        SOAP_ENV__Fault() : faultcode(), faultstring(), faultactor(), detail(), SOAP_ENV__Code(), SOAP_ENV__Reason(), SOAP_ENV__Node(), SOAP_ENV__Role(), SOAP_ENV__Detail() { }
        /** Friend allocator */
        friend SOAP_FMAC1 SOAP_ENV__Fault * SOAP_FMAC2 soap_instantiate_SOAP_ENV__Fault(struct soap*, int, const char*, const char*, size_t*);
};
#endif
#endif

/******************************************************************************\
 *                                                                            *
 * Typedefs                                                                   *
 *                                                                            *
\******************************************************************************/


/* (built-in):0 */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
typedef char *_XML;
#endif

/* (built-in):0 */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
typedef char *_QName;
#endif

/******************************************************************************\
 *                                                                            *
 * Serializable Types                                                         *
 *                                                                            *
\******************************************************************************/


/* char has binding name 'byte' for type 'xsd:byte' */
#ifndef SOAP_TYPE_byte
#define SOAP_TYPE_byte (3)
#endif

/* int has binding name 'int' for type 'xsd:int' */
#ifndef SOAP_TYPE_int
#define SOAP_TYPE_int (1)
#endif

/* double has binding name 'double' for type 'xsd:double' */
#ifndef SOAP_TYPE_double
#define SOAP_TYPE_double (7)
#endif

/* struct SOAP_ENV__Fault has binding name 'SOAP_ENV__Fault' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Fault
#define SOAP_TYPE_SOAP_ENV__Fault (31)
#endif

/* struct SOAP_ENV__Reason has binding name 'SOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Reason
#define SOAP_TYPE_SOAP_ENV__Reason (30)
#endif

/* struct SOAP_ENV__Detail has binding name 'SOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Detail
#define SOAP_TYPE_SOAP_ENV__Detail (27)
#endif

/* struct SOAP_ENV__Code has binding name 'SOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Code
#define SOAP_TYPE_SOAP_ENV__Code (25)
#endif

/* struct SOAP_ENV__Header has binding name 'SOAP_ENV__Header' for type '' */
#ifndef SOAP_TYPE_SOAP_ENV__Header
#define SOAP_TYPE_SOAP_ENV__Header (24)
#endif

/* struct ns__pow has binding name 'ns__pow' for type 'ns:pow' */
#ifndef SOAP_TYPE_ns__pow
#define SOAP_TYPE_ns__pow (23)
#endif

/* struct ns__powResponse has binding name 'ns__powResponse' for type 'ns:powResponse' */
#ifndef SOAP_TYPE_ns__powResponse
#define SOAP_TYPE_ns__powResponse (22)
#endif

/* struct ns__div has binding name 'ns__div' for type 'ns:div' */
#ifndef SOAP_TYPE_ns__div
#define SOAP_TYPE_ns__div (20)
#endif

/* struct ns__divResponse has binding name 'ns__divResponse' for type 'ns:divResponse' */
#ifndef SOAP_TYPE_ns__divResponse
#define SOAP_TYPE_ns__divResponse (19)
#endif

/* struct ns__mul has binding name 'ns__mul' for type 'ns:mul' */
#ifndef SOAP_TYPE_ns__mul
#define SOAP_TYPE_ns__mul (17)
#endif

/* struct ns__mulResponse has binding name 'ns__mulResponse' for type 'ns:mulResponse' */
#ifndef SOAP_TYPE_ns__mulResponse
#define SOAP_TYPE_ns__mulResponse (16)
#endif

/* struct ns__sub has binding name 'ns__sub' for type 'ns:sub' */
#ifndef SOAP_TYPE_ns__sub
#define SOAP_TYPE_ns__sub (14)
#endif

/* struct ns__subResponse has binding name 'ns__subResponse' for type 'ns:subResponse' */
#ifndef SOAP_TYPE_ns__subResponse
#define SOAP_TYPE_ns__subResponse (13)
#endif

/* struct ns__add has binding name 'ns__add' for type 'ns:add' */
#ifndef SOAP_TYPE_ns__add
#define SOAP_TYPE_ns__add (11)
#endif

/* struct ns__addResponse has binding name 'ns__addResponse' for type 'ns:addResponse' */
#ifndef SOAP_TYPE_ns__addResponse
#define SOAP_TYPE_ns__addResponse (10)
#endif

/* struct SOAP_ENV__Reason * has binding name 'PointerToSOAP_ENV__Reason' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Reason
#define SOAP_TYPE_PointerToSOAP_ENV__Reason (33)
#endif

/* struct SOAP_ENV__Detail * has binding name 'PointerToSOAP_ENV__Detail' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Detail
#define SOAP_TYPE_PointerToSOAP_ENV__Detail (32)
#endif

/* struct SOAP_ENV__Code * has binding name 'PointerToSOAP_ENV__Code' for type '' */
#ifndef SOAP_TYPE_PointerToSOAP_ENV__Code
#define SOAP_TYPE_PointerToSOAP_ENV__Code (26)
#endif

/* double * has binding name 'PointerTodouble' for type 'xsd:double' */
#ifndef SOAP_TYPE_PointerTodouble
#define SOAP_TYPE_PointerTodouble (8)
#endif

/* _QName has binding name '_QName' for type 'xsd:QName' */
#ifndef SOAP_TYPE__QName
#define SOAP_TYPE__QName (6)
#endif

/* _XML has binding name '_XML' for type '' */
#ifndef SOAP_TYPE__XML
#define SOAP_TYPE__XML (5)
#endif

/* char * has binding name 'string' for type 'xsd:string' */
#ifndef SOAP_TYPE_string
#define SOAP_TYPE_string (4)
#endif

/******************************************************************************\
 *                                                                            *
 * Externals                                                                  *
 *                                                                            *
\******************************************************************************/


#endif

/* End of soapStub.h */
