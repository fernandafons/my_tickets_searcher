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

#line 473 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQContextMenuEvent.cpp"

#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQContextMenuEvent.cpp"
#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQContextMenuEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQContextMenuEvent.cpp"


class sipQContextMenuEvent : public  ::QContextMenuEvent
{
public:
    sipQContextMenuEvent( ::QContextMenuEvent::Reason,const  ::QPoint&,const  ::QPoint&, ::Qt::KeyboardModifiers);
    sipQContextMenuEvent( ::QContextMenuEvent::Reason,const  ::QPoint&,const  ::QPoint&);
    sipQContextMenuEvent( ::QContextMenuEvent::Reason,const  ::QPoint&);
    sipQContextMenuEvent(const  ::QContextMenuEvent&);
    ~sipQContextMenuEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQContextMenuEvent(const sipQContextMenuEvent &);
    sipQContextMenuEvent &operator = (const sipQContextMenuEvent &);
};

sipQContextMenuEvent::sipQContextMenuEvent( ::QContextMenuEvent::Reason a0,const  ::QPoint& a1,const  ::QPoint& a2, ::Qt::KeyboardModifiers a3):  ::QContextMenuEvent(a0,a1,a2,a3), sipPySelf(SIP_NULLPTR)
{
}

sipQContextMenuEvent::sipQContextMenuEvent( ::QContextMenuEvent::Reason a0,const  ::QPoint& a1,const  ::QPoint& a2):  ::QContextMenuEvent(a0,a1,a2), sipPySelf(SIP_NULLPTR)
{
}

sipQContextMenuEvent::sipQContextMenuEvent( ::QContextMenuEvent::Reason a0,const  ::QPoint& a1):  ::QContextMenuEvent(a0,a1), sipPySelf(SIP_NULLPTR)
{
}

sipQContextMenuEvent::sipQContextMenuEvent(const  ::QContextMenuEvent& a0):  ::QContextMenuEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQContextMenuEvent::~sipQContextMenuEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QContextMenuEvent_x, "x(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_x(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_x(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->x();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_x, doc_QContextMenuEvent_x);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QContextMenuEvent_y, "y(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_y(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_y(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->y();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_y, doc_QContextMenuEvent_y);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QContextMenuEvent_globalX, "globalX(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_globalX(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_globalX(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalX();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_globalX, doc_QContextMenuEvent_globalX);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QContextMenuEvent_globalY, "globalY(self) -> int");

extern "C" {static PyObject *meth_QContextMenuEvent_globalY(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_globalY(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
            int sipRes;

            sipRes = sipCpp->globalY();

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_globalY, doc_QContextMenuEvent_globalY);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QContextMenuEvent_pos, "pos(self) -> QPoint");

extern "C" {static PyObject *meth_QContextMenuEvent_pos(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_pos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->pos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_pos, doc_QContextMenuEvent_pos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QContextMenuEvent_globalPos, "globalPos(self) -> QPoint");

extern "C" {static PyObject *meth_QContextMenuEvent_globalPos(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_globalPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
             ::QPoint*sipRes;

            sipRes = new  ::QPoint(sipCpp->globalPos());

            return sipConvertFromNewType(sipRes,sipType_QPoint,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_globalPos, doc_QContextMenuEvent_globalPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QContextMenuEvent_reason, "reason(self) -> QContextMenuEvent.Reason");

extern "C" {static PyObject *meth_QContextMenuEvent_reason(PyObject *, PyObject *);}
static PyObject *meth_QContextMenuEvent_reason(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QContextMenuEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QContextMenuEvent, &sipCpp))
        {
             ::QContextMenuEvent::Reason sipRes;

            sipRes = sipCpp->reason();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QContextMenuEvent_Reason);
        }
    }

    sipNoMethod(sipParseErr, sipName_QContextMenuEvent, sipName_reason, doc_QContextMenuEvent_reason);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QContextMenuEvent(void *, const sipTypeDef *);}
static void *cast_QContextMenuEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QContextMenuEvent *sipCpp = reinterpret_cast< ::QContextMenuEvent *>(sipCppV);

    if (targetType == sipType_QInputEvent)
        return static_cast< ::QInputEvent *>(sipCpp);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QContextMenuEvent(void *, int);}
static void release_QContextMenuEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQContextMenuEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QContextMenuEvent *>(sipCppV);
}


extern "C" {static void assign_QContextMenuEvent(void *, Py_ssize_t, void *);}
static void assign_QContextMenuEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QContextMenuEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QContextMenuEvent *>(sipSrc);
}


extern "C" {static void *copy_QContextMenuEvent(const void *, Py_ssize_t);}
static void *copy_QContextMenuEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QContextMenuEvent(reinterpret_cast<const  ::QContextMenuEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QContextMenuEvent(sipSimpleWrapper *);}
static void dealloc_QContextMenuEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQContextMenuEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QContextMenuEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QContextMenuEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QContextMenuEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQContextMenuEvent *sipCpp = SIP_NULLPTR;

    {
         ::QContextMenuEvent::Reason a0;
        const  ::QPoint* a1;
        const  ::QPoint* a2;
         ::Qt::KeyboardModifiers* a3;
        int a3State = 0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ9J9J1", sipType_QContextMenuEvent_Reason, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2, sipType_Qt_KeyboardModifiers, &a3, &a3State))
        {
            sipCpp = new sipQContextMenuEvent(a0,*a1,*a2,*a3);
            sipReleaseType(a3,sipType_Qt_KeyboardModifiers,a3State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QContextMenuEvent::Reason a0;
        const  ::QPoint* a1;
        const  ::QPoint* a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ9J9", sipType_QContextMenuEvent_Reason, &a0, sipType_QPoint, &a1, sipType_QPoint, &a2))
        {
            sipCpp = new sipQContextMenuEvent(a0,*a1,*a2);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
         ::QContextMenuEvent::Reason a0;
        const  ::QPoint* a1;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "EJ9", sipType_QContextMenuEvent_Reason, &a0, sipType_QPoint, &a1))
        {
            sipCpp = new sipQContextMenuEvent(a0,*a1);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QContextMenuEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QContextMenuEvent, &a0))
        {
            sipCpp = new sipQContextMenuEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QContextMenuEvent[] = {{77, 255, 1}};


static PyMethodDef methods_QContextMenuEvent[] = {
    {sipName_globalPos, meth_QContextMenuEvent_globalPos, METH_VARARGS, doc_QContextMenuEvent_globalPos},
    {sipName_globalX, meth_QContextMenuEvent_globalX, METH_VARARGS, doc_QContextMenuEvent_globalX},
    {sipName_globalY, meth_QContextMenuEvent_globalY, METH_VARARGS, doc_QContextMenuEvent_globalY},
    {sipName_pos, meth_QContextMenuEvent_pos, METH_VARARGS, doc_QContextMenuEvent_pos},
    {sipName_reason, meth_QContextMenuEvent_reason, METH_VARARGS, doc_QContextMenuEvent_reason},
    {sipName_x, meth_QContextMenuEvent_x, METH_VARARGS, doc_QContextMenuEvent_x},
    {sipName_y, meth_QContextMenuEvent_y, METH_VARARGS, doc_QContextMenuEvent_y}
};

static sipEnumMemberDef enummembers_QContextMenuEvent[] = {
    {sipName_Keyboard, static_cast<int>( ::QContextMenuEvent::Keyboard), 17},
    {sipName_Mouse, static_cast<int>( ::QContextMenuEvent::Mouse), 17},
    {sipName_Other, static_cast<int>( ::QContextMenuEvent::Other), 17},
};

PyDoc_STRVAR(doc_QContextMenuEvent, "\1QContextMenuEvent(QContextMenuEvent.Reason, QPoint, QPoint, Union[Qt.KeyboardModifiers, Qt.KeyboardModifier])\n"
"QContextMenuEvent(QContextMenuEvent.Reason, QPoint, QPoint)\n"
"QContextMenuEvent(QContextMenuEvent.Reason, QPoint)\n"
"QContextMenuEvent(QContextMenuEvent)");


static pyqt5ClassPluginDef plugin_QContextMenuEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QContextMenuEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QContextMenuEvent,
        SIP_NULLPTR,
        &plugin_QContextMenuEvent
    },
    {
        sipNameNr_QContextMenuEvent,
        {0, 0, 1},
        7, methods_QContextMenuEvent,
        3, enummembers_QContextMenuEvent,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QContextMenuEvent,
    -1,
    -1,
    supers_QContextMenuEvent,
    SIP_NULLPTR,
    init_type_QContextMenuEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QContextMenuEvent,
    assign_QContextMenuEvent,
    SIP_NULLPTR,
    copy_QContextMenuEvent,
    release_QContextMenuEvent,
    cast_QContextMenuEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
