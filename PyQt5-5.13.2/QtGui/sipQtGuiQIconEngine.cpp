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

#include "sipAPIQtGui.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qiconengine.sip"
#include <qiconengine.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpixmap.sip"
#include <qpixmap.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qicon.sip"
#include <qicon.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"
#line 38 "sip/QtCore/qpycore_qlist.sip"
#include <qlist.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"
#line 26 "sip/QtCore/qdatastream.sip"
#include <qdatastream.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"
#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"
#line 26 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 54 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQIconEngine.cpp"


class sipQIconEngine : public  ::QIconEngine
{
public:
    sipQIconEngine();
    sipQIconEngine(const  ::QIconEngine&);
    virtual ~sipQIconEngine();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
     ::QString iconName() const SIP_OVERRIDE;
    QList< ::QSize> availableSizes( ::QIcon::Mode, ::QIcon::State) const SIP_OVERRIDE;
    bool write( ::QDataStream&) const SIP_OVERRIDE;
    bool read( ::QDataStream&) SIP_OVERRIDE;
     ::QIconEngine* clone() const SIP_OVERRIDE;
     ::QString key() const SIP_OVERRIDE;
    void addFile(const  ::QString&,const  ::QSize&, ::QIcon::Mode, ::QIcon::State) SIP_OVERRIDE;
    void addPixmap(const  ::QPixmap&, ::QIcon::Mode, ::QIcon::State) SIP_OVERRIDE;
     ::QPixmap pixmap(const  ::QSize&, ::QIcon::Mode, ::QIcon::State) SIP_OVERRIDE;
     ::QSize actualSize(const  ::QSize&, ::QIcon::Mode, ::QIcon::State) SIP_OVERRIDE;
    void paint( ::QPainter*,const  ::QRect&, ::QIcon::Mode, ::QIcon::State) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQIconEngine(const sipQIconEngine &);
    sipQIconEngine &operator = (const sipQIconEngine &);

    char sipPyMethods[11];
};

sipQIconEngine::sipQIconEngine():  ::QIconEngine(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::sipQIconEngine(const  ::QIconEngine& a0):  ::QIconEngine(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQIconEngine::~sipQIconEngine()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

 ::QString sipQIconEngine::iconName() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[0]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_iconName);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[0]), sipPySelf, SIP_NULLPTR, sipName_iconName);
#endif

    if (!sipMeth)
        return  ::QIconEngine::iconName();

    extern  ::QString sipVH_QtGui_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_24(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

QList< ::QSize> sipQIconEngine::availableSizes( ::QIcon::Mode a0, ::QIcon::State a1) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[1]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_availableSizes);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[1]), sipPySelf, SIP_NULLPTR, sipName_availableSizes);
#endif

    if (!sipMeth)
        return  ::QIconEngine::availableSizes(a0,a1);

    extern QList< ::QSize> sipVH_QtGui_27(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QIcon::Mode, ::QIcon::State);

    return sipVH_QtGui_27(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1);
}

bool sipQIconEngine::write( ::QDataStream& a0) const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[2]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_write);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[2]), sipPySelf, SIP_NULLPTR, sipName_write);
#endif

    if (!sipMeth)
        return  ::QIconEngine::write(a0);

    extern bool sipVH_QtGui_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QDataStream&);

    return sipVH_QtGui_26(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

bool sipQIconEngine::read( ::QDataStream& a0)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[3], &sipPySelf, SIP_NULLPTR, sipName_read);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[3], sipPySelf, SIP_NULLPTR, sipName_read);
#endif

    if (!sipMeth)
        return  ::QIconEngine::read(a0);

    extern bool sipVH_QtGui_26(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QDataStream&);

    return sipVH_QtGui_26(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0);
}

 ::QIconEngine* sipQIconEngine::clone() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[4]), const_cast<sipSimpleWrapper **>(&sipPySelf), sipName_QIconEngine, sipName_clone);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[4]), sipPySelf, sipName_QIconEngine, sipName_clone);
#endif

    if (!sipMeth)
        return 0;

    extern  ::QIconEngine* sipVH_QtGui_25(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_25(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

 ::QString sipQIconEngine::key() const
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, const_cast<char *>(&sipPyMethods[5]), const_cast<sipSimpleWrapper **>(&sipPySelf), SIP_NULLPTR, sipName_key);

#else
    sipMeth = sipIsPyMethod(&sipGILState, const_cast<char *>(&sipPyMethods[5]), sipPySelf, SIP_NULLPTR, sipName_key);
#endif

    if (!sipMeth)
        return  ::QIconEngine::key();

    extern  ::QString sipVH_QtGui_24(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *);

    return sipVH_QtGui_24(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth);
}

void sipQIconEngine::addFile(const  ::QString& a0,const  ::QSize& a1, ::QIcon::Mode a2, ::QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[6], &sipPySelf, SIP_NULLPTR, sipName_addFile);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[6], sipPySelf, SIP_NULLPTR, sipName_addFile);
#endif

    if (!sipMeth)
    {
         ::QIconEngine::addFile(a0,a1,a2,a3);
        return;
    }

    extern void sipVH_QtGui_23(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QString&,const  ::QSize&, ::QIcon::Mode, ::QIcon::State);

    sipVH_QtGui_23(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2, a3);
}

void sipQIconEngine::addPixmap(const  ::QPixmap& a0, ::QIcon::Mode a1, ::QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[7], &sipPySelf, SIP_NULLPTR, sipName_addPixmap);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[7], sipPySelf, SIP_NULLPTR, sipName_addPixmap);
#endif

    if (!sipMeth)
    {
         ::QIconEngine::addPixmap(a0,a1,a2);
        return;
    }

    extern void sipVH_QtGui_22(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QPixmap&, ::QIcon::Mode, ::QIcon::State);

    sipVH_QtGui_22(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QPixmap sipQIconEngine::pixmap(const  ::QSize& a0, ::QIcon::Mode a1, ::QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[8], &sipPySelf, SIP_NULLPTR, sipName_pixmap);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[8], sipPySelf, SIP_NULLPTR, sipName_pixmap);
#endif

    if (!sipMeth)
        return  ::QIconEngine::pixmap(a0,a1,a2);

    extern  ::QPixmap sipVH_QtGui_21(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QSize&, ::QIcon::Mode, ::QIcon::State);

    return sipVH_QtGui_21(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}

 ::QSize sipQIconEngine::actualSize(const  ::QSize& a0, ::QIcon::Mode a1, ::QIcon::State a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[9], &sipPySelf, SIP_NULLPTR, sipName_actualSize);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[9], sipPySelf, SIP_NULLPTR, sipName_actualSize);
#endif

    if (!sipMeth)
        return  ::QIconEngine::actualSize(a0,a1,a2);

    extern  ::QSize sipVH_QtGui_20(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *, const  ::QSize&, ::QIcon::Mode, ::QIcon::State);

    return sipVH_QtGui_20(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}

void sipQIconEngine::paint( ::QPainter*a0,const  ::QRect& a1, ::QIcon::Mode a2, ::QIcon::State a3)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[10], &sipPySelf, sipName_QIconEngine, sipName_paint);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[10], sipPySelf, sipName_QIconEngine, sipName_paint);
#endif

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_19(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QPainter*,const  ::QRect&, ::QIcon::Mode, ::QIcon::State);

    sipVH_QtGui_19(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2, a3);
}


PyDoc_STRVAR(doc_QIconEngine_paint, "paint(self, QPainter, QRect, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_paint(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_paint(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QPainter* a0;
        const  ::QRect* a1;
         ::QIcon::Mode a2;
         ::QIcon::State a3;
         ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPainter, &a0, sipType_QRect, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QIconEngine, sipName_paint);
                return SIP_NULLPTR;
            }

            sipCpp->paint(a0,*a1,a2,a3);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_paint, doc_QIconEngine_paint);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_actualSize, "actualSize(self, QSize, QIcon.Mode, QIcon.State) -> QSize");

extern "C" {static PyObject *meth_QIconEngine_actualSize(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_actualSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QSize* a0;
         ::QIcon::Mode a1;
         ::QIcon::State a2;
         ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
             ::QSize*sipRes;

            sipRes = new  ::QSize((sipSelfWasArg ? sipCpp-> ::QIconEngine::actualSize(*a0,a1,a2) : sipCpp->actualSize(*a0,a1,a2)));

            return sipConvertFromNewType(sipRes,sipType_QSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_actualSize, doc_QIconEngine_actualSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_pixmap, "pixmap(self, QSize, QIcon.Mode, QIcon.State) -> QPixmap");

extern "C" {static PyObject *meth_QIconEngine_pixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_pixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QSize* a0;
         ::QIcon::Mode a1;
         ::QIcon::State a2;
         ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
             ::QPixmap*sipRes;

            sipRes = new  ::QPixmap((sipSelfWasArg ? sipCpp-> ::QIconEngine::pixmap(*a0,a1,a2) : sipCpp->pixmap(*a0,a1,a2)));

            return sipConvertFromNewType(sipRes,sipType_QPixmap,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_pixmap, doc_QIconEngine_pixmap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_addPixmap, "addPixmap(self, QPixmap, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_addPixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QPixmap* a0;
         ::QIcon::Mode a1;
         ::QIcon::State a2;
         ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QPixmap, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2))
        {
            (sipSelfWasArg ? sipCpp-> ::QIconEngine::addPixmap(*a0,a1,a2) : sipCpp->addPixmap(*a0,a1,a2));

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addPixmap, doc_QIconEngine_addPixmap);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_addFile, "addFile(self, str, QSize, QIcon.Mode, QIcon.State)");

extern "C" {static PyObject *meth_QIconEngine_addFile(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_addFile(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QString* a0;
        int a0State = 0;
        const  ::QSize* a1;
         ::QIcon::Mode a2;
         ::QIcon::State a3;
         ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ1J9EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QString,&a0, &a0State, sipType_QSize, &a1, sipType_QIcon_Mode, &a2, sipType_QIcon_State, &a3))
        {
            (sipSelfWasArg ? sipCpp-> ::QIconEngine::addFile(*a0,*a1,a2,a3) : sipCpp->addFile(*a0,*a1,a2,a3));
            sipReleaseType(const_cast< ::QString *>(a0),sipType_QString,a0State);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_addFile, doc_QIconEngine_addFile);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_key, "key(self) -> str");

extern "C" {static PyObject *meth_QIconEngine_key(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_key(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngine, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QIconEngine::key() : sipCpp->key()));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_key, doc_QIconEngine_key);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_clone, "clone(self) -> QIconEngine");

extern "C" {static PyObject *meth_QIconEngine_clone(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_clone(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
        const  ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngine, &sipCpp))
        {
             ::QIconEngine*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QIconEngine, sipName_clone);
                return SIP_NULLPTR;
            }

            sipRes = sipCpp->clone();

            return sipConvertFromNewType(sipRes,sipType_QIconEngine,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_clone, doc_QIconEngine_clone);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_read, "read(self, QDataStream) -> bool");

extern "C" {static PyObject *meth_QIconEngine_read(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_read(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QDataStream* a0;
         ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QDataStream, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QIconEngine::read(*a0) : sipCpp->read(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_read, doc_QIconEngine_read);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_write, "write(self, QDataStream) -> bool");

extern "C" {static PyObject *meth_QIconEngine_write(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_write(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QDataStream* a0;
        const  ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QDataStream, &a0))
        {
            bool sipRes;

            sipRes = (sipSelfWasArg ? sipCpp-> ::QIconEngine::write(*a0) : sipCpp->write(*a0));

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_write, doc_QIconEngine_write);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_availableSizes, "availableSizes(self, mode: QIcon.Mode = QIcon.Normal, state: QIcon.State = QIcon.Off) -> List[QSize]");

extern "C" {static PyObject *meth_QIconEngine_availableSizes(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_availableSizes(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
         ::QIcon::Mode a0 = QIcon::Normal;
         ::QIcon::State a1 = QIcon::Off;
        const  ::QIconEngine *sipCpp;

        static const char *sipKwdList[] = {
            sipName_mode,
            sipName_state,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "B|EE", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QIcon_Mode, &a0, sipType_QIcon_State, &a1))
        {
            QList< ::QSize>*sipRes;

            sipRes = new QList< ::QSize>((sipSelfWasArg ? sipCpp-> ::QIconEngine::availableSizes(a0,a1) : sipCpp->availableSizes(a0,a1)));

            return sipConvertFromNewType(sipRes,sipType_QList_0100QSize,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_availableSizes, doc_QIconEngine_availableSizes);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_iconName, "iconName(self) -> str");

extern "C" {static PyObject *meth_QIconEngine_iconName(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_iconName(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    bool sipSelfWasArg = (!sipSelf || sipIsDerivedClass((sipSimpleWrapper *)sipSelf));

    {
        const  ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngine, &sipCpp))
        {
             ::QString*sipRes;

            sipRes = new  ::QString((sipSelfWasArg ? sipCpp-> ::QIconEngine::iconName() : sipCpp->iconName()));

            return sipConvertFromNewType(sipRes,sipType_QString,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_iconName, doc_QIconEngine_iconName);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_isNull, "isNull(self) -> bool");

extern "C" {static PyObject *meth_QIconEngine_isNull(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_isNull(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QIconEngine, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isNull();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_isNull, doc_QIconEngine_isNull);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QIconEngine_scaledPixmap, "scaledPixmap(self, QSize, QIcon.Mode, QIcon.State, float) -> QPixmap");

extern "C" {static PyObject *meth_QIconEngine_scaledPixmap(PyObject *, PyObject *);}
static PyObject *meth_QIconEngine_scaledPixmap(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QSize* a0;
         ::QIcon::Mode a1;
         ::QIcon::State a2;
         ::qreal a3;
         ::QIconEngine *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ9EEd", &sipSelf, sipType_QIconEngine, &sipCpp, sipType_QSize, &a0, sipType_QIcon_Mode, &a1, sipType_QIcon_State, &a2, &a3))
        {
             ::QPixmap*sipRes;

            sipRes = new  ::QPixmap(sipCpp->scaledPixmap(*a0,a1,a2,a3));

            return sipConvertFromNewType(sipRes,sipType_QPixmap,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QIconEngine, sipName_scaledPixmap, doc_QIconEngine_scaledPixmap);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QIconEngine(void *, int);}
static void release_QIconEngine(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQIconEngine *>(sipCppV);
    else
        delete reinterpret_cast< ::QIconEngine *>(sipCppV);
}


extern "C" {static void dealloc_QIconEngine(sipSimpleWrapper *);}
static void dealloc_QIconEngine(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQIconEngine *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QIconEngine(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QIconEngine(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QIconEngine(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQIconEngine *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQIconEngine();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QIconEngine* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QIconEngine, &a0))
        {
            sipCpp = new sipQIconEngine(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QIconEngine[] = {
    {sipName_actualSize, meth_QIconEngine_actualSize, METH_VARARGS, doc_QIconEngine_actualSize},
    {sipName_addFile, meth_QIconEngine_addFile, METH_VARARGS, doc_QIconEngine_addFile},
    {sipName_addPixmap, meth_QIconEngine_addPixmap, METH_VARARGS, doc_QIconEngine_addPixmap},
    {sipName_availableSizes, SIP_MLMETH_CAST(meth_QIconEngine_availableSizes), METH_VARARGS|METH_KEYWORDS, doc_QIconEngine_availableSizes},
    {sipName_clone, meth_QIconEngine_clone, METH_VARARGS, doc_QIconEngine_clone},
    {sipName_iconName, meth_QIconEngine_iconName, METH_VARARGS, doc_QIconEngine_iconName},
    {sipName_isNull, meth_QIconEngine_isNull, METH_VARARGS, doc_QIconEngine_isNull},
    {sipName_key, meth_QIconEngine_key, METH_VARARGS, doc_QIconEngine_key},
    {sipName_paint, meth_QIconEngine_paint, METH_VARARGS, doc_QIconEngine_paint},
    {sipName_pixmap, meth_QIconEngine_pixmap, METH_VARARGS, doc_QIconEngine_pixmap},
    {sipName_read, meth_QIconEngine_read, METH_VARARGS, doc_QIconEngine_read},
    {sipName_scaledPixmap, meth_QIconEngine_scaledPixmap, METH_VARARGS, doc_QIconEngine_scaledPixmap},
    {sipName_write, meth_QIconEngine_write, METH_VARARGS, doc_QIconEngine_write}
};

static sipEnumMemberDef enummembers_QIconEngine[] = {
    {sipName_AvailableSizesHook, static_cast<int>( ::QIconEngine::AvailableSizesHook), 64},
    {sipName_IconNameHook, static_cast<int>( ::QIconEngine::IconNameHook), 64},
    {sipName_IsNullHook, static_cast<int>( ::QIconEngine::IsNullHook), 64},
    {sipName_ScaledPixmapHook, static_cast<int>( ::QIconEngine::ScaledPixmapHook), 64},
};

PyDoc_STRVAR(doc_QIconEngine, "\1QIconEngine()\n"
"QIconEngine(QIconEngine)");


static pyqt5ClassPluginDef plugin_QIconEngine = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QIconEngine = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QIconEngine,
        SIP_NULLPTR,
        &plugin_QIconEngine
    },
    {
        sipNameNr_QIconEngine,
        {0, 0, 1},
        13, methods_QIconEngine,
        4, enummembers_QIconEngine,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QIconEngine,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QIconEngine,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QIconEngine,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QIconEngine,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
