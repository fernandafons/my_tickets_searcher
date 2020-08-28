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

#line 97 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qabstracttextdocumentlayout.sip"
#include <qabstracttextdocumentlayout.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextObjectInterface.cpp"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qpainter.sip"
#include <qpainter.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 164 "sip/QtCore/qrect.sip"
#include <qrect.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextdocument.sip"
#include <qtextdocument.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 59 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qtextformat.sip"
#include <qtextformat.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextObjectInterface.cpp"
#line 97 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQTextObjectInterface.cpp"


class sipQTextObjectInterface : public  ::QTextObjectInterface
{
public:
    sipQTextObjectInterface();
    sipQTextObjectInterface(const  ::QTextObjectInterface&);
    virtual ~sipQTextObjectInterface();

    /*
     * There is a protected method for every virtual method visible from
     * this class.
     */
protected:
    void drawObject( ::QPainter*,const  ::QRectF&, ::QTextDocument*,int,const  ::QTextFormat&) SIP_OVERRIDE;
     ::QSizeF intrinsicSize( ::QTextDocument*,int,const  ::QTextFormat&) SIP_OVERRIDE;

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQTextObjectInterface(const sipQTextObjectInterface &);
    sipQTextObjectInterface &operator = (const sipQTextObjectInterface &);

    char sipPyMethods[2];
};

sipQTextObjectInterface::sipQTextObjectInterface():  ::QTextObjectInterface(), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextObjectInterface::sipQTextObjectInterface(const  ::QTextObjectInterface& a0):  ::QTextObjectInterface(a0), sipPySelf(SIP_NULLPTR)
{
    memset(sipPyMethods, 0, sizeof (sipPyMethods));
}

sipQTextObjectInterface::~sipQTextObjectInterface()
{
    sipInstanceDestroyedEx(&sipPySelf);
}

void sipQTextObjectInterface::drawObject( ::QPainter*a0,const  ::QRectF& a1, ::QTextDocument*a2,int a3,const  ::QTextFormat& a4)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[0], &sipPySelf, sipName_QTextObjectInterface, sipName_drawObject);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[0], sipPySelf, sipName_QTextObjectInterface, sipName_drawObject);
#endif

    if (!sipMeth)
        return;

    extern void sipVH_QtGui_16(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QPainter*,const  ::QRectF&, ::QTextDocument*,int,const  ::QTextFormat&);

    sipVH_QtGui_16(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2, a3, a4);
}

 ::QSizeF sipQTextObjectInterface::intrinsicSize( ::QTextDocument*a0,int a1,const  ::QTextFormat& a2)
{
    sip_gilstate_t sipGILState;
    PyObject *sipMeth;

#if SIP_ABI_MAJOR_VERSION >= 12 && SIP_ABI_MINOR_VERSION >= 8
    sipMeth = sipIsPyMethod_12_8(&sipGILState, &sipPyMethods[1], &sipPySelf, sipName_QTextObjectInterface, sipName_intrinsicSize);

#else
    sipMeth = sipIsPyMethod(&sipGILState, &sipPyMethods[1], sipPySelf, sipName_QTextObjectInterface, sipName_intrinsicSize);
#endif

    if (!sipMeth)
        return  ::QSizeF();

    extern  ::QSizeF sipVH_QtGui_15(sip_gilstate_t, sipVirtErrorHandlerFunc, sipSimpleWrapper *, PyObject *,  ::QTextDocument*,int,const  ::QTextFormat&);

    return sipVH_QtGui_15(sipGILState, sipImportedVirtErrorHandlers_QtGui_QtCore[0].iveh_handler, sipPySelf, sipMeth, a0, a1, a2);
}


PyDoc_STRVAR(doc_QTextObjectInterface_intrinsicSize, "intrinsicSize(self, QTextDocument, int, QTextFormat) -> QSizeF");

extern "C" {static PyObject *meth_QTextObjectInterface_intrinsicSize(PyObject *, PyObject *);}
static PyObject *meth_QTextObjectInterface_intrinsicSize(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QTextDocument* a0;
        int a1;
        const  ::QTextFormat* a2;
         ::QTextObjectInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8iJ9", &sipSelf, sipType_QTextObjectInterface, &sipCpp, sipType_QTextDocument, &a0, &a1, sipType_QTextFormat, &a2))
        {
             ::QSizeF*sipRes;

            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextObjectInterface, sipName_intrinsicSize);
                return SIP_NULLPTR;
            }

            sipRes = new  ::QSizeF(sipCpp->intrinsicSize(a0,a1,*a2));

            return sipConvertFromNewType(sipRes,sipType_QSizeF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextObjectInterface, sipName_intrinsicSize, doc_QTextObjectInterface_intrinsicSize);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QTextObjectInterface_drawObject, "drawObject(self, QPainter, QRectF, QTextDocument, int, QTextFormat)");

extern "C" {static PyObject *meth_QTextObjectInterface_drawObject(PyObject *, PyObject *);}
static PyObject *meth_QTextObjectInterface_drawObject(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;
    PyObject *sipOrigSelf = sipSelf;

    {
         ::QPainter* a0;
        const  ::QRectF* a1;
         ::QTextDocument* a2;
        int a3;
        const  ::QTextFormat* a4;
         ::QTextObjectInterface *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "BJ8J9J8iJ9", &sipSelf, sipType_QTextObjectInterface, &sipCpp, sipType_QPainter, &a0, sipType_QRectF, &a1, sipType_QTextDocument, &a2, &a3, sipType_QTextFormat, &a4))
        {
            if (!sipOrigSelf)
            {
                sipAbstractMethod(sipName_QTextObjectInterface, sipName_drawObject);
                return SIP_NULLPTR;
            }

            sipCpp->drawObject(a0,*a1,a2,a3,*a4);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QTextObjectInterface, sipName_drawObject, doc_QTextObjectInterface_drawObject);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QTextObjectInterface(void *, int);}
static void release_QTextObjectInterface(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQTextObjectInterface *>(sipCppV);
    else
        delete reinterpret_cast< ::QTextObjectInterface *>(sipCppV);
}


extern "C" {static int mixin_QTextObjectInterface(PyObject *, PyObject *, PyObject *);}
static int mixin_QTextObjectInterface(PyObject *sipSelf, PyObject *sipArgs, PyObject *sipKwds)
{
    return sipInitMixin(sipSelf, sipArgs, sipKwds, (sipClassTypeDef *)&sipTypeDef_QtGui_QTextObjectInterface);
}


extern "C" {static void dealloc_QTextObjectInterface(sipSimpleWrapper *);}
static void dealloc_QTextObjectInterface(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQTextObjectInterface *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QTextObjectInterface(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QTextObjectInterface(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QTextObjectInterface(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQTextObjectInterface *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new sipQTextObjectInterface();

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QTextObjectInterface* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QTextObjectInterface, &a0))
        {
            sipCpp = new sipQTextObjectInterface(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QTextObjectInterface[] = {
    {sipName_drawObject, meth_QTextObjectInterface_drawObject, METH_VARARGS, doc_QTextObjectInterface_drawObject},
    {sipName_intrinsicSize, meth_QTextObjectInterface_intrinsicSize, METH_VARARGS, doc_QTextObjectInterface_intrinsicSize}
};

PyDoc_STRVAR(doc_QTextObjectInterface, "\1QTextObjectInterface()\n"
"QTextObjectInterface(QTextObjectInterface)");


static pyqt5ClassPluginDef plugin_QTextObjectInterface = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    "org.qt-project.Qt.QTextObjectInterface"
};


sipClassTypeDef sipTypeDef_QtGui_QTextObjectInterface = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_ABSTRACT|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QTextObjectInterface,
        SIP_NULLPTR,
        &plugin_QTextObjectInterface
    },
    {
        sipNameNr_QTextObjectInterface,
        {0, 0, 1},
        2, methods_QTextObjectInterface,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QTextObjectInterface,
    -1,
    sipNameNr_sip_simplewrapper,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QTextObjectInterface,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QTextObjectInterface,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    release_QTextObjectInterface,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    mixin_QTextObjectInterface
};