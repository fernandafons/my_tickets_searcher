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

#line 238 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQHoverEvent.cpp"

#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQHoverEvent.cpp"
#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQHoverEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQHoverEvent.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQHoverEvent.cpp"


class sipQHoverEvent : public  ::QHoverEvent
{
public:
    sipQHoverEvent( ::QEvent::Type,const  ::QPointF&,const  ::QPointF&, ::Qt::KeyboardModifiers);
    sipQHoverEvent(const  ::QHoverEvent&);
    ~sipQHoverEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQHoverEvent(const sipQHoverEvent &);
    sipQHoverEvent &operator = (const sipQHoverEvent &);
};

sipQHoverEvent::sipQHoverEvent( ::QEvent::Type a0,const  ::QPointF& a1,const  ::QPointF& a2, ::Qt::KeyboardModifiers a3):  ::QHoverEvent(a0,a1,a2,a3), sipPySelf(SIP_NULLPTR)
{
}

sipQHoverEvent::sipQHoverEvent(const  ::QHoverEvent& a0):  ::QHoverEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQHoverEvent::~sipQHoverEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QHoverEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QHoverEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_pos, doc_QHoverEvent_pos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHoverEvent_oldPos, "oldPos(self) -> QPoint");

extern "C" {static PyObject *meth_QHoverEvent_oldPos(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_oldPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->oldPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_oldPos, doc_QHoverEvent_oldPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHoverEvent_posF, "posF(self) -> QPointF");

extern "C" {static PyObject *meth_QHoverEvent_posF(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_posF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->posF());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_posF, doc_QHoverEvent_posF);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QHoverEvent_oldPosF, "oldPosF(self) -> QPointF");

extern "C" {static PyObject *meth_QHoverEvent_oldPosF(PyObject *, PyObject *);}
static PyObject *meth_QHoverEvent_oldPosF(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QHoverEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QHoverEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->oldPosF());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QHoverEvent, sipName_oldPosF, doc_QHoverEvent_oldPosF);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QHoverEvent(void *, const sipTypeDef *);}
static void *cast_QHoverEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QHoverEvent *sipCpp = reinterpret_cast< ::QHoverEvent *>(sipCppV);

    if (targetType == sipType_QInputEvent)
        return static_cast< ::QInputEvent *>(sipCpp);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QHoverEvent(void *, int);}
static void release_QHoverEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQHoverEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QHoverEvent *>(sipCppV);
}


extern "C" {static void assign_QHoverEvent(void *, Py_ssize_t, void *);}
static void assign_QHoverEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QHoverEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QHoverEvent *>(sipSrc);
}


extern "C" {static void *copy_QHoverEvent(const void *, Py_ssize_t);}
static void *copy_QHoverEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QHoverEvent(reinterpret_cast<const  ::QHoverEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QHoverEvent(sipSimpleWrapper *);}
static void dealloc_QHoverEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQHoverEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QHoverEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QHoverEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QHoverEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQHoverEvent *sipCpp = SIP_NULLPTR;

    {
         ::QEvent::Type a0;
        const  ::QPointF* a1;
        int a1State = 0;
        const  ::QPointF* a2;
        int a2State = 0;
         ::Qt::KeyboardModifiers a3def = Qt::NoModifier;
         ::Qt::KeyboardModifiers* a3 = &a3def;
        int a3State = 0;

        static const char *sipKwdList[] = {
            SIP_NULLPTR,
            SIP_NULLPTR,
            SIP_NULLPTR,
            sipName_modifiers,
        };

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, sipKwdList, sipUnused, "EJ1J1|J1", sipType_QEvent_Type, &a0, sipType_QPointF, &a1, &a1State, sipType_QPointF, &a2, &a2State, sipType_Qt_KeyboardModifiers, &a3, &a3State))
        {
            sipCpp = new sipQHoverEvent(a0,*a1,*a2,*a3);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);
            sipReleaseType(const_cast< ::QPointF *>(a2),sipType_QPointF,a2State);
            sipReleaseType(a3,sipType_Qt_KeyboardModifiers,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QHoverEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QHoverEvent, &a0))
        {
            sipCpp = new sipQHoverEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QHoverEvent[] = {{77, 255, 1}};


static PyMethodDef methods_QHoverEvent[] = {
    {sipName_oldPos, meth_QHoverEvent_oldPos, METH_VARARGS, doc_QHoverEvent_oldPos},
    {sipName_oldPosF, meth_QHoverEvent_oldPosF, METH_VARARGS, doc_QHoverEvent_oldPosF},
    {sipName_pos, meth_QHoverEvent_pos, METH_VARARGS, doc_QHoverEvent_pos},
    {sipName_posF, meth_QHoverEvent_posF, METH_VARARGS, doc_QHoverEvent_posF}
};

PyDoc_STRVAR(doc_QHoverEvent, "\1QHoverEvent(QEvent.Type, Union[QPointF, QPoint], Union[QPointF, QPoint], modifiers: Union[Qt.KeyboardModifiers, Qt.KeyboardModifier] = Qt.NoModifier)\n"
"QHoverEvent(QHoverEvent)");


static pyqt5ClassPluginDef plugin_QHoverEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QHoverEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QHoverEvent,
        SIP_NULLPTR,
        &plugin_QHoverEvent
    },
    {
        sipNameNr_QHoverEvent,
        {0, 0, 1},
        4, methods_QHoverEvent,
        0, SIP_NULLPTR,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QHoverEvent,
    -1,
    -1,
    supers_QHoverEvent,
    SIP_NULLPTR,
    init_type_QHoverEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QHoverEvent,
    assign_QHoverEvent,
    SIP_NULLPTR,
    copy_QHoverEvent,
    release_QHoverEvent,
    cast_QHoverEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
