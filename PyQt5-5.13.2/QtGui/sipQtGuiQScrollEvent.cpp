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

#line 816 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtGui/qevent.sip"
#include <qevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQScrollEvent.cpp"

#line 95 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQScrollEvent.cpp"
#line 26 "sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtGui/sipQtGuiQScrollEvent.cpp"


class sipQScrollEvent : public  ::QScrollEvent
{
public:
    sipQScrollEvent(const  ::QPointF&,const  ::QPointF&, ::QScrollEvent::ScrollState);
    sipQScrollEvent(const  ::QScrollEvent&);
    ~sipQScrollEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQScrollEvent(const sipQScrollEvent &);
    sipQScrollEvent &operator = (const sipQScrollEvent &);
};

sipQScrollEvent::sipQScrollEvent(const  ::QPointF& a0,const  ::QPointF& a1, ::QScrollEvent::ScrollState a2):  ::QScrollEvent(a0,a1,a2), sipPySelf(SIP_NULLPTR)
{
}

sipQScrollEvent::sipQScrollEvent(const  ::QScrollEvent& a0):  ::QScrollEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQScrollEvent::~sipQScrollEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QScrollEvent_contentPos, "contentPos(self) -> QPointF");

extern "C" {static PyObject *meth_QScrollEvent_contentPos(PyObject *, PyObject *);}
static PyObject *meth_QScrollEvent_contentPos(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QScrollEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScrollEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->contentPos());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QScrollEvent, sipName_contentPos, doc_QScrollEvent_contentPos);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QScrollEvent_overshootDistance, "overshootDistance(self) -> QPointF");

extern "C" {static PyObject *meth_QScrollEvent_overshootDistance(PyObject *, PyObject *);}
static PyObject *meth_QScrollEvent_overshootDistance(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QScrollEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScrollEvent, &sipCpp))
        {
             ::QPointF*sipRes;

            sipRes = new  ::QPointF(sipCpp->overshootDistance());

            return sipConvertFromNewType(sipRes,sipType_QPointF,SIP_NULLPTR);
        }
    }

    sipNoMethod(sipParseErr, sipName_QScrollEvent, sipName_overshootDistance, doc_QScrollEvent_overshootDistance);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QScrollEvent_scrollState, "scrollState(self) -> QScrollEvent.ScrollState");

extern "C" {static PyObject *meth_QScrollEvent_scrollState(PyObject *, PyObject *);}
static PyObject *meth_QScrollEvent_scrollState(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QScrollEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QScrollEvent, &sipCpp))
        {
             ::QScrollEvent::ScrollState sipRes;

            sipRes = sipCpp->scrollState();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QScrollEvent_ScrollState);
        }
    }

    sipNoMethod(sipParseErr, sipName_QScrollEvent, sipName_scrollState, doc_QScrollEvent_scrollState);

    return SIP_NULLPTR;
}


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QScrollEvent(void *, const sipTypeDef *);}
static void *cast_QScrollEvent(void *sipCppV, const sipTypeDef *targetType)
{
     ::QScrollEvent *sipCpp = reinterpret_cast< ::QScrollEvent *>(sipCppV);

    if (targetType == sipType_QEvent)
        return static_cast< ::QEvent *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QScrollEvent(void *, int);}
static void release_QScrollEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQScrollEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QScrollEvent *>(sipCppV);
}


extern "C" {static void assign_QScrollEvent(void *, Py_ssize_t, void *);}
static void assign_QScrollEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QScrollEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QScrollEvent *>(sipSrc);
}


extern "C" {static void *copy_QScrollEvent(const void *, Py_ssize_t);}
static void *copy_QScrollEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QScrollEvent(reinterpret_cast<const  ::QScrollEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QScrollEvent(sipSimpleWrapper *);}
static void dealloc_QScrollEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQScrollEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QScrollEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QScrollEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QScrollEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQScrollEvent *sipCpp = SIP_NULLPTR;

    {
        const  ::QPointF* a0;
        int a0State = 0;
        const  ::QPointF* a1;
        int a1State = 0;
         ::QScrollEvent::ScrollState a2;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J1J1E", sipType_QPointF, &a0, &a0State, sipType_QPointF, &a1, &a1State, sipType_QScrollEvent_ScrollState, &a2))
        {
            sipCpp = new sipQScrollEvent(*a0,*a1,a2);
            sipReleaseType(const_cast< ::QPointF *>(a0),sipType_QPointF,a0State);
            sipReleaseType(const_cast< ::QPointF *>(a1),sipType_QPointF,a1State);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QScrollEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QScrollEvent, &a0))
        {
            sipCpp = new sipQScrollEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QScrollEvent[] = {{6, 0, 1}};


static PyMethodDef methods_QScrollEvent[] = {
    {sipName_contentPos, meth_QScrollEvent_contentPos, METH_VARARGS, doc_QScrollEvent_contentPos},
    {sipName_overshootDistance, meth_QScrollEvent_overshootDistance, METH_VARARGS, doc_QScrollEvent_overshootDistance},
    {sipName_scrollState, meth_QScrollEvent_scrollState, METH_VARARGS, doc_QScrollEvent_scrollState}
};

static sipEnumMemberDef enummembers_QScrollEvent[] = {
    {sipName_ScrollFinished, static_cast<int>( ::QScrollEvent::ScrollFinished), 256},
    {sipName_ScrollStarted, static_cast<int>( ::QScrollEvent::ScrollStarted), 256},
    {sipName_ScrollUpdated, static_cast<int>( ::QScrollEvent::ScrollUpdated), 256},
};

PyDoc_STRVAR(doc_QScrollEvent, "\1QScrollEvent(Union[QPointF, QPoint], Union[QPointF, QPoint], QScrollEvent.ScrollState)\n"
"QScrollEvent(QScrollEvent)");


static pyqt5ClassPluginDef plugin_QScrollEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtGui_QScrollEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QScrollEvent,
        SIP_NULLPTR,
        &plugin_QScrollEvent
    },
    {
        sipNameNr_QScrollEvent,
        {0, 0, 1},
        3, methods_QScrollEvent,
        3, enummembers_QScrollEvent,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QScrollEvent,
    -1,
    -1,
    supers_QScrollEvent,
    SIP_NULLPTR,
    init_type_QScrollEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QScrollEvent,
    assign_QScrollEvent,
    SIP_NULLPTR,
    copy_QScrollEvent,
    release_QScrollEvent,
    cast_QScrollEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};