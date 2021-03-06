/*
 * Interface wrapper code.
 *
 * Generated by SIP 5.3.0
 *
 * Copyright (c) 2019 Riverbank Computing Limited <info@riverbankcomputing.com>
 * 
 * This file is part of PyQt5.
 * 
 * This file may be used under the terms of the GNU General Public License
 * version 3.0 as published by the Free Software Foundation and appearing in
 * the file LICENSE included in the packaging of this file.  Please review the
 * following information to ensure the GNU General Public License version 3.0
 * requirements will be met: http://www.gnu.org/copyleft/gpl.html.
 * 
 * If you do not wish to use this file under the terms of the GPL version 3.0
 * then you may purchase a commercial license.  For more information contact
 * info@riverbankcomputing.com.
 * 
 * This file is provided AS IS with NO WARRANTY OF ANY KIND, INCLUDING THE
 * WARRANTY OF DESIGN, MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE.
 */

#include "sipAPIQtXml.h"

#line 203 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlContentHandler.cpp"

#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlContentHandler.cpp"
#line 50 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlContentHandler.cpp"
#line 190 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtXml/qxml.sip"
#include <qxml.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtXml/sipQtXmlQXmlContentHandler.cpp"


class sipQXmlContentHandler : public  ::QXmlContentHandler
{
public:
    sipQXmlContentHandler();
    sipQXmlContentHandler(const  ::QXmlContentHandler&);
    virtual ~sipQXmlContentHandler();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString errorString() const SIP_OVERRIDE;
    bool skippedEntity(const  ::QString&) SIP_OVERRIDE;
    bool processingInstruction(const  ::QString&,const  ::QString&) SIP_OVERRIDE;
    bool ignorableWhitespace(const  ::QString&) SIP_OVERRIDE;
    bool characters(const  ::QString&) SIP_OVERRIDE;
    bool endElement(const  ::QString&,const  ::QString&,const  ::QString&) SIP_OVERRIDE;
    bool startElement(const  ::QString&,const  ::QString&,const  ::QString&,const  ::QXmlAttributes&) SIP_OVERRIDE;
    bool endPrefixMapping(const  ::QString&) SIP_OVERRIDE;
    bool startPrefixMapping(const  ::QString&,const  ::QString&) SIP_OVERRIDE;
    bool endDocument() SIP_OVERRIDE;
    bool startDocument() SIP_OVERRIDE;
    void setDocumentLocator( ::QXmlLocator*) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQXmlContentHandler(const sipQXmlContentHandler &);
    sipQXmlContentHandler &operator = (const sipQXmlContentHandler &);

    char sipPyMethods[12];
};

sipQXmlContentHandler::sipQXmlContentHandler():  ::QXmlContentHandler(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlContentHandler::sipQXmlContentHandler(const  ::QXmlContentHandler& a0):  ::QXmlContentHandler(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQXmlContentHandler::~sipQXmlContentHandler()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQXmlContentHandler::errorString() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QXmlContentHandler, sipName_errorString);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), sipPySelf, sipName_QXmlContentHandler, sipName_errorString);
#endif

    if (!sipMeth)
        return  ::QString();

    extern  ::QString sipVH_QtXml_3(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_3(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlContentHandler::skippedEntity(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[1], &sipPySelf, sipName_QXmlContentHandler, sipName_skippedEntity);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], sipPySelf, sipName_QXmlContentHandler, sipName_skippedEntity);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::processingInstruction(const  ::QString& a0,const  ::QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[2], &sipPySelf, sipName_QXmlContentHandler, sipName_processingInstruction);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[2], sipPySelf, sipName_QXmlContentHandler, sipName_processingInstruction);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QString&);

    return sipVH_QtXml_29(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQXmlContentHandler::ignorableWhitespace(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[3], &sipPySelf, sipName_QXmlContentHandler, sipName_ignorableWhitespace);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], sipPySelf, sipName_QXmlContentHandler, sipName_ignorableWhitespace);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::characters(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[4], &sipPySelf, sipName_QXmlContentHandler, sipName_characters);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[4], sipPySelf, sipName_QXmlContentHandler, sipName_characters);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::endElement(const  ::QString& a0,const  ::QString& a1,const  ::QString& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[5], &sipPySelf, sipName_QXmlContentHandler, sipName_endElement);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[5], sipPySelf, sipName_QXmlContentHandler, sipName_endElement);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_31(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QString&,const  ::QString&);

    return sipVH_QtXml_31(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}

bool sipQXmlContentHandler::startElement(const  ::QString& a0,const  ::QString& a1,const  ::QString& a2,const  ::QXmlAttributes& a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[6], &sipPySelf, sipName_QXmlContentHandler, sipName_startElement);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[6], sipPySelf, sipName_QXmlContentHandler, sipName_startElement);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_30(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QString&,const  ::QString&,const  ::QXmlAttributes&);

    return sipVH_QtXml_30(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2, a3);
}

bool sipQXmlContentHandler::endPrefixMapping(const  ::QString& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[7], &sipPySelf, sipName_QXmlContentHandler, sipName_endPrefixMapping);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[7], sipPySelf, sipName_QXmlContentHandler, sipName_endPrefixMapping);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_8(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&);

    return sipVH_QtXml_8(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQXmlContentHandler::startPrefixMapping(const  ::QString& a0,const  ::QString& a1)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[8], &sipPySelf, sipName_QXmlContentHandler, sipName_startPrefixMapping);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], sipPySelf, sipName_QXmlContentHandler, sipName_startPrefixMapping);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_29(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QString&);

    return sipVH_QtXml_29(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQXmlContentHandler::endDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[9], &sipPySelf, sipName_QXmlContentHandler, sipName_endDocument);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[9], sipPySelf, sipName_QXmlContentHandler, sipName_endDocument);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_26(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

bool sipQXmlContentHandler::startDocument()
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[10], &sipPySelf, sipName_QXmlContentHandler, sipName_startDocument);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[10], sipPySelf, sipName_QXmlContentHandler, sipName_startDocument);
#endif

    if (!sipMeth)
        return 0;

    extern bool sipVH_QtXml_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtXml_26(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQXmlContentHandler::setDocumentLocator( ::QXmlLocator*a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[11], &sipPySelf, sipName_QXmlContentHandler, sipName_setDocumentLocator);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[11], sipPySelf, sipName_QXmlContentHandler, sipName_setDocumentLocator);
#endif

    if (!sipMeth)
        return;

    extern void sipVH_QtXml_28(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QXmlLocator*);

    sipVH_QtXml_28(sipGILState, sipImportedVirtErrorHandlers_QtXml_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}


PyDoc_STRVAR(doc_QXmlContentHandler_setDocumentLocator, "setDocumentLocator(self, QXmlLocator)");

extern "C" {static PyObject *meth_QXmlContentHandler_setDocumentLocator(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_setDocumentLocator(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlLocator* a0;
        PyObject *a0Keep;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B@J8", &sipSelf, sipType_QXmlContentHandler, &sipCpp, &a0Keep, sipType_QXmlLocator, &a0))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_setDocumentLocator);
                return SIP_NULLPTR;
            }

            sipCpp->setDocumentLocator(a0);

            sipKeepReference(sipSelf, -12, a0Keep);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_setDocumentLocator, doc_QXmlContentHandler_setDocumentLocator);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_startDocument, "startDocument(self) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_startDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_startDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlContentHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_startDocument);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->startDocument();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_startDocument, doc_QXmlContentHandler_startDocument);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_endDocument, "endDocument(self) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_endDocument(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_endDocument(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlContentHandler, &sipCpp))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_endDocument);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->endDocument();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_endDocument, doc_QXmlContentHandler_endDocument);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_startPrefixMapping, "startPrefixMapping(self, str, str) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_startPrefixMapping(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_startPrefixMapping(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_startPrefixMapping);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->startPrefixMapping(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_startPrefixMapping, doc_QXmlContentHandler_startPrefixMapping);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_endPrefixMapping, "endPrefixMapping(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_endPrefixMapping(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_endPrefixMapping(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_endPrefixMapping);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->endPrefixMapping(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_endPrefixMapping, doc_QXmlContentHandler_endPrefixMapping);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_startElement, "startElement(self, str, str, str, QXmlAttributes) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_startElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_startElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
        const  ::QXmlAttributes* a3;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1J9", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State, sipType_QXmlAttributes, &a3))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_startElement);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->startElement(*a0,*a1,*a2,*a3);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_startElement, doc_QXmlContentHandler_startElement);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_endElement, "endElement(self, str, str, str) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_endElement(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_endElement(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
        const  ::QString* a2;
        int a2State = 0;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1J1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State, sipType_QString,&a2, &a2State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_endElement);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->endElement(*a0,*a1,*a2);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);
            sipReleaseType(const_cast< ::QString *>(a2),sipType_QString,a2State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_endElement, doc_QXmlContentHandler_endElement);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_characters, "characters(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_characters(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_characters(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_characters);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->characters(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_characters, doc_QXmlContentHandler_characters);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_ignorableWhitespace, "ignorableWhitespace(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_ignorableWhitespace(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_ignorableWhitespace(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_ignorableWhitespace);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->ignorableWhitespace(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_ignorableWhitespace, doc_QXmlContentHandler_ignorableWhitespace);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_processingInstruction, "processingInstruction(self, str, str) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_processingInstruction(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_processingInstruction(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QString* a1;
        int a1State = 0;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State, sipType_QString,&a1, &a1State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_processingInstruction);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->processingInstruction(*a0,*a1);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);
            sipReleaseType(const_cast< ::QString *>(a1),sipType_QString,a1State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_processingInstruction, doc_QXmlContentHandler_processingInstruction);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_skippedEntity, "skippedEntity(self, str) -> bool");

extern "C" {static PyObject *meth_QXmlContentHandler_skippedEntity(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_skippedEntity(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QString* a0;
        int a0State = 0;
         ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1", &sipSelf, sipType_QXmlContentHandler, &sipCpp, sipType_QString,&a0, &a0State))
        {
            bool sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_skippedEntity);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->skippedEntity(*a0);
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_skippedEntity, doc_QXmlContentHandler_skippedEntity);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QXmlContentHandler_errorString, "errorString(self) -> str");

extern "C" {static PyObject *meth_QXmlContentHandler_errorString(PyObject *, PyObject *);}
static PyObject *meth_QXmlContentHandler_errorString(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QXmlContentHandler *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QXmlContentHandler, &sipCpp))
        {
             ::QString*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QXmlContentHandler, sipName_errorString);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QString(sipCpp->errorString());

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QXmlContentHandler, sipName_errorString, doc_QXmlContentHandler_errorString);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QXmlContentHandler(void *, int);}
static void release_QXmlContentHandler(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQXmlContentHandler *>(sipCppV);
    else
        delete reinterpret_cast< ::QXmlContentHandler *>(sipCppV);
}


extern "C" {static void dealloc_QXmlContentHandler(sipSimpleWrapper *);}
static void dealloc_QXmlContentHandler(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQXmlContentHandler *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QXmlContentHandler(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QXmlContentHandler(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QXmlContentHandler(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQXmlContentHandler *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQXmlContentHandler();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QXmlContentHandler* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QXmlContentHandler, &a0))
        {
            sipCpp = new sipQXmlContentHandler(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QXmlContentHandler[] = {
    {sipName_characters, meth_QXmlContentHandler_characters, METH_VARARGS, doc_QXmlContentHandler_characters},
    {sipName_endDocument, meth_QXmlContentHandler_endDocument, METH_VARARGS, doc_QXmlContentHandler_endDocument},
    {sipName_endElement, meth_QXmlContentHandler_endElement, METH_VARARGS, doc_QXmlContentHandler_endElement},
    {sipName_endPrefixMapping, meth_QXmlContentHandler_endPrefixMapping, METH_VARARGS, doc_QXmlContentHandler_endPrefixMapping},
    {sipName_errorString, meth_QXmlContentHandler_errorString, METH_VARARGS, doc_QXmlContentHandler_errorString},
    {sipName_ignorableWhitespace, meth_QXmlContentHandler_ignorableWhitespace, METH_VARARGS, doc_QXmlContentHandler_ignorableWhitespace},
    {sipName_processingInstruction, meth_QXmlContentHandler_processingInstruction, METH_VARARGS, doc_QXmlContentHandler_processingInstruction},
    {sipName_setDocumentLocator, meth_QXmlContentHandler_setDocumentLocator, METH_VARARGS, doc_QXmlContentHandler_setDocumentLocator},
    {sipName_skippedEntity, meth_QXmlContentHandler_skippedEntity, METH_VARARGS, doc_QXmlContentHandler_skippedEntity},
    {sipName_startDocument, meth_QXmlContentHandler_startDocument, METH_VARARGS, doc_QXmlContentHandler_startDocument},
    {sipName_startElement, meth_QXmlContentHandler_startElement, METH_VARARGS, doc_QXmlContentHandler_startElement},
    {sipName_startPrefixMapping, meth_QXmlContentHandler_startPrefixMapping, METH_VARARGS, doc_QXmlContentHandler_startPrefixMapping}
};

PyDoc_STRVAR(doc_QXmlContentHandler, "\1QXmlContentHandler()\n"
"QXmlContentHandler(QXmlContentHandler)");


static pyqt5ClassPluginDef plugin_QXmlContentHandler = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtXml_QXmlContentHandler = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QXmlContentHandler,
        SIP_NULLPTR,
        &plugin_QXmlContentHandler
    },
    {
        sipNameNr_QXmlContentHandler,
        {0, 0, 1},
        12, methods_QXmlContentHandler,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QXmlContentHandler,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QXmlContentHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QXmlContentHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QXmlContentHandler,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
