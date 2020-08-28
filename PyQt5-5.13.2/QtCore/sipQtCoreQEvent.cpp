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

#include "sipAPIQtCore.h"

#line 26 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtCore/qcoreevent.sip"
#include <qcoreevent.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtCore/sipQtCoreQEvent.cpp"



class sipQEvent : public  ::QEvent
{
public:
    sipQEvent( ::QEvent::Type);
    sipQEvent(const  ::QEvent&);
    ~sipQEvent();

public:
    sipSimpleWrapper *sipPySelf;

private:
    sipQEvent(const sipQEvent &);
    sipQEvent &operator = (const sipQEvent &);
};

sipQEvent::sipQEvent( ::QEvent::Type a0):  ::QEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQEvent::sipQEvent(const  ::QEvent& a0):  ::QEvent(a0), sipPySelf(SIP_NULLPTR)
{
}

sipQEvent::~sipQEvent()
{
    sipInstanceDestroyedEx(&sipPySelf);
}


PyDoc_STRVAR(doc_QEvent_type, "type(self) -> QEvent.Type");

extern "C" {static PyObject *meth_QEvent_type(PyObject *, PyObject *);}
static PyObject *meth_QEvent_type(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
             ::QEvent::Type sipRes;

            sipRes = sipCpp->type();

            return sipConvertFromEnum(static_cast<int>(sipRes), sipType_QEvent_Type);
        }
    }

    sipNoMethod(sipParseErr, sipName_QEvent, sipName_type, doc_QEvent_type);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QEvent_spontaneous, "spontaneous(self) -> bool");

extern "C" {static PyObject *meth_QEvent_spontaneous(PyObject *, PyObject *);}
static PyObject *meth_QEvent_spontaneous(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->spontaneous();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QEvent, sipName_spontaneous, doc_QEvent_spontaneous);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QEvent_setAccepted, "setAccepted(self, bool)");

extern "C" {static PyObject *meth_QEvent_setAccepted(PyObject *, PyObject *);}
static PyObject *meth_QEvent_setAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        bool a0;
         ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "Bb", &sipSelf, sipType_QEvent, &sipCpp, &a0))
        {
            sipCpp->setAccepted(a0);

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QEvent, sipName_setAccepted, doc_QEvent_setAccepted);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QEvent_isAccepted, "isAccepted(self) -> bool");

extern "C" {static PyObject *meth_QEvent_isAccepted(PyObject *, PyObject *);}
static PyObject *meth_QEvent_isAccepted(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        const  ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            bool sipRes;

            sipRes = sipCpp->isAccepted();

            return PyBool_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QEvent, sipName_isAccepted, doc_QEvent_isAccepted);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QEvent_accept, "accept(self)");

extern "C" {static PyObject *meth_QEvent_accept(PyObject *, PyObject *);}
static PyObject *meth_QEvent_accept(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            sipCpp->accept();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QEvent, sipName_accept, doc_QEvent_accept);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QEvent_ignore, "ignore(self)");

extern "C" {static PyObject *meth_QEvent_ignore(PyObject *, PyObject *);}
static PyObject *meth_QEvent_ignore(PyObject *sipSelf, PyObject *sipArgs)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
         ::QEvent *sipCpp;

        if (sipParseArgs(&sipParseErr, sipArgs, "B", &sipSelf, sipType_QEvent, &sipCpp))
        {
            sipCpp->ignore();

            Py_INCREF(Py_None);
            return Py_None;
        }
    }

    sipNoMethod(sipParseErr, sipName_QEvent, sipName_ignore, doc_QEvent_ignore);

    return SIP_NULLPTR;
}


PyDoc_STRVAR(doc_QEvent_registerEventType, "registerEventType(hint: int = -1) -> int");

extern "C" {static PyObject *meth_QEvent_registerEventType(PyObject *, PyObject *, PyObject *);}
static PyObject *meth_QEvent_registerEventType(PyObject *, PyObject *sipArgs, PyObject *sipKwds)
{
    PyObject *sipParseErr = SIP_NULLPTR;

    {
        int a0 = -1;

        static const char *sipKwdList[] = {
            sipName_hint,
        };

        if (sipParseKwdArgs(&sipParseErr, sipArgs, sipKwds, sipKwdList, SIP_NULLPTR, "|i", &a0))
        {
            int sipRes;

            sipRes =  ::QEvent::registerEventType(a0);

            return PyLong_FromLong(sipRes);
        }
    }

    sipNoMethod(sipParseErr, sipName_QEvent, sipName_registerEventType, doc_QEvent_registerEventType);

    return SIP_NULLPTR;
}


/* Call the instance's destructor. */
extern "C" {static void release_QEvent(void *, int);}
static void release_QEvent(void *sipCppV, int sipState)
{
    if (sipState & SIP_DERIVED_CLASS)
        delete reinterpret_cast<sipQEvent *>(sipCppV);
    else
        delete reinterpret_cast< ::QEvent *>(sipCppV);
}


extern "C" {static void assign_QEvent(void *, Py_ssize_t, void *);}
static void assign_QEvent(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QEvent *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QEvent *>(sipSrc);
}


extern "C" {static void *copy_QEvent(const void *, Py_ssize_t);}
static void *copy_QEvent(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QEvent(reinterpret_cast<const  ::QEvent *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QEvent(sipSimpleWrapper *);}
static void dealloc_QEvent(sipSimpleWrapper *sipSelf)
{
    if (sipIsDerivedClass(sipSelf))
        reinterpret_cast<sipQEvent *>(sipGetAddress(sipSelf))->sipPySelf = SIP_NULLPTR;

    if (sipIsOwnedByPython(sipSelf))
    {
        release_QEvent(sipGetAddress(sipSelf), sipIsDerivedClass(sipSelf));
    }
}


extern "C" {static void *init_type_QEvent(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QEvent(sipSimpleWrapper *sipSelf, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
    sipQEvent *sipCpp = SIP_NULLPTR;

    {
         ::QEvent::Type a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "E", sipType_QEvent_Type, &a0))
        {
            sipCpp = new sipQEvent(a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    {
        const  ::QEvent* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QEvent, &a0))
        {
            sipCpp = new sipQEvent(*a0);

            sipCpp->sipPySelf = sipSelf;

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


static PyMethodDef methods_QEvent[] = {
    {sipName_accept, meth_QEvent_accept, METH_VARARGS, doc_QEvent_accept},
    {sipName_ignore, meth_QEvent_ignore, METH_VARARGS, doc_QEvent_ignore},
    {sipName_isAccepted, meth_QEvent_isAccepted, METH_VARARGS, doc_QEvent_isAccepted},
    {sipName_registerEventType, SIP_MLMETH_CAST(meth_QEvent_registerEventType), METH_VARARGS|METH_KEYWORDS, doc_QEvent_registerEventType},
    {sipName_setAccepted, meth_QEvent_setAccepted, METH_VARARGS, doc_QEvent_setAccepted},
    {sipName_spontaneous, meth_QEvent_spontaneous, METH_VARARGS, doc_QEvent_spontaneous},
    {sipName_type, meth_QEvent_type, METH_VARARGS, doc_QEvent_type}
};

static sipEnumMemberDef enummembers_QEvent[] = {
    {sipName_ActionAdded, static_cast<int>( ::QEvent::ActionAdded), 70},
    {sipName_ActionChanged, static_cast<int>( ::QEvent::ActionChanged), 70},
    {sipName_ActionRemoved, static_cast<int>( ::QEvent::ActionRemoved), 70},
    {sipName_ActivationChange, static_cast<int>( ::QEvent::ActivationChange), 70},
    {sipName_ApplicationActivate, static_cast<int>( ::QEvent::ApplicationActivate), 70},
    {sipName_ApplicationActivated, static_cast<int>( ::QEvent::ApplicationActivated), 70},
    {sipName_ApplicationDeactivate, static_cast<int>( ::QEvent::ApplicationDeactivate), 70},
    {sipName_ApplicationDeactivated, static_cast<int>( ::QEvent::ApplicationDeactivated), 70},
    {sipName_ApplicationFontChange, static_cast<int>( ::QEvent::ApplicationFontChange), 70},
    {sipName_ApplicationLayoutDirectionChange, static_cast<int>( ::QEvent::ApplicationLayoutDirectionChange), 70},
    {sipName_ApplicationPaletteChange, static_cast<int>( ::QEvent::ApplicationPaletteChange), 70},
    {sipName_ApplicationStateChange, static_cast<int>( ::QEvent::ApplicationStateChange), 70},
    {sipName_ApplicationWindowIconChange, static_cast<int>( ::QEvent::ApplicationWindowIconChange), 70},
    {sipName_ChildAdded, static_cast<int>( ::QEvent::ChildAdded), 70},
    {sipName_ChildPolished, static_cast<int>( ::QEvent::ChildPolished), 70},
    {sipName_ChildRemoved, static_cast<int>( ::QEvent::ChildRemoved), 70},
    {sipName_Clipboard, static_cast<int>( ::QEvent::Clipboard), 70},
    {sipName_Close, static_cast<int>( ::QEvent::Close), 70},
    {sipName_CloseSoftwareInputPanel, static_cast<int>( ::QEvent::CloseSoftwareInputPanel), 70},
    {sipName_ContentsRectChange, static_cast<int>( ::QEvent::ContentsRectChange), 70},
    {sipName_ContextMenu, static_cast<int>( ::QEvent::ContextMenu), 70},
    {sipName_CursorChange, static_cast<int>( ::QEvent::CursorChange), 70},
    {sipName_DeferredDelete, static_cast<int>( ::QEvent::DeferredDelete), 70},
    {sipName_DragEnter, static_cast<int>( ::QEvent::DragEnter), 70},
    {sipName_DragLeave, static_cast<int>( ::QEvent::DragLeave), 70},
    {sipName_DragMove, static_cast<int>( ::QEvent::DragMove), 70},
    {sipName_Drop, static_cast<int>( ::QEvent::Drop), 70},
    {sipName_DynamicPropertyChange, static_cast<int>( ::QEvent::DynamicPropertyChange), 70},
    {sipName_EnabledChange, static_cast<int>( ::QEvent::EnabledChange), 70},
    {sipName_Enter, static_cast<int>( ::QEvent::Enter), 70},
    {sipName_EnterWhatsThisMode, static_cast<int>( ::QEvent::EnterWhatsThisMode), 70},
    {sipName_Expose, static_cast<int>( ::QEvent::Expose), 70},
    {sipName_FileOpen, static_cast<int>( ::QEvent::FileOpen), 70},
    {sipName_FocusAboutToChange, static_cast<int>( ::QEvent::FocusAboutToChange), 70},
    {sipName_FocusIn, static_cast<int>( ::QEvent::FocusIn), 70},
    {sipName_FocusOut, static_cast<int>( ::QEvent::FocusOut), 70},
    {sipName_FontChange, static_cast<int>( ::QEvent::FontChange), 70},
    {sipName_Gesture, static_cast<int>( ::QEvent::Gesture), 70},
    {sipName_GestureOverride, static_cast<int>( ::QEvent::GestureOverride), 70},
    {sipName_GrabKeyboard, static_cast<int>( ::QEvent::GrabKeyboard), 70},
    {sipName_GrabMouse, static_cast<int>( ::QEvent::GrabMouse), 70},
    {sipName_GraphicsSceneContextMenu, static_cast<int>( ::QEvent::GraphicsSceneContextMenu), 70},
    {sipName_GraphicsSceneDragEnter, static_cast<int>( ::QEvent::GraphicsSceneDragEnter), 70},
    {sipName_GraphicsSceneDragLeave, static_cast<int>( ::QEvent::GraphicsSceneDragLeave), 70},
    {sipName_GraphicsSceneDragMove, static_cast<int>( ::QEvent::GraphicsSceneDragMove), 70},
    {sipName_GraphicsSceneDrop, static_cast<int>( ::QEvent::GraphicsSceneDrop), 70},
    {sipName_GraphicsSceneHelp, static_cast<int>( ::QEvent::GraphicsSceneHelp), 70},
    {sipName_GraphicsSceneHoverEnter, static_cast<int>( ::QEvent::GraphicsSceneHoverEnter), 70},
    {sipName_GraphicsSceneHoverLeave, static_cast<int>( ::QEvent::GraphicsSceneHoverLeave), 70},
    {sipName_GraphicsSceneHoverMove, static_cast<int>( ::QEvent::GraphicsSceneHoverMove), 70},
    {sipName_GraphicsSceneMouseDoubleClick, static_cast<int>( ::QEvent::GraphicsSceneMouseDoubleClick), 70},
    {sipName_GraphicsSceneMouseMove, static_cast<int>( ::QEvent::GraphicsSceneMouseMove), 70},
    {sipName_GraphicsSceneMousePress, static_cast<int>( ::QEvent::GraphicsSceneMousePress), 70},
    {sipName_GraphicsSceneMouseRelease, static_cast<int>( ::QEvent::GraphicsSceneMouseRelease), 70},
    {sipName_GraphicsSceneMove, static_cast<int>( ::QEvent::GraphicsSceneMove), 70},
    {sipName_GraphicsSceneResize, static_cast<int>( ::QEvent::GraphicsSceneResize), 70},
    {sipName_GraphicsSceneWheel, static_cast<int>( ::QEvent::GraphicsSceneWheel), 70},
    {sipName_Hide, static_cast<int>( ::QEvent::Hide), 70},
    {sipName_HideToParent, static_cast<int>( ::QEvent::HideToParent), 70},
    {sipName_HoverEnter, static_cast<int>( ::QEvent::HoverEnter), 70},
    {sipName_HoverLeave, static_cast<int>( ::QEvent::HoverLeave), 70},
    {sipName_HoverMove, static_cast<int>( ::QEvent::HoverMove), 70},
    {sipName_IconDrag, static_cast<int>( ::QEvent::IconDrag), 70},
    {sipName_IconTextChange, static_cast<int>( ::QEvent::IconTextChange), 70},
    {sipName_InputMethod, static_cast<int>( ::QEvent::InputMethod), 70},
    {sipName_InputMethodQuery, static_cast<int>( ::QEvent::InputMethodQuery), 70},
    {sipName_KeyPress, static_cast<int>( ::QEvent::KeyPress), 70},
    {sipName_KeyRelease, static_cast<int>( ::QEvent::KeyRelease), 70},
    {sipName_KeyboardLayoutChange, static_cast<int>( ::QEvent::KeyboardLayoutChange), 70},
    {sipName_LanguageChange, static_cast<int>( ::QEvent::LanguageChange), 70},
    {sipName_LayoutDirectionChange, static_cast<int>( ::QEvent::LayoutDirectionChange), 70},
    {sipName_LayoutRequest, static_cast<int>( ::QEvent::LayoutRequest), 70},
    {sipName_Leave, static_cast<int>( ::QEvent::Leave), 70},
    {sipName_LeaveWhatsThisMode, static_cast<int>( ::QEvent::LeaveWhatsThisMode), 70},
    {sipName_LocaleChange, static_cast<int>( ::QEvent::LocaleChange), 70},
    {sipName_MacSizeChange, static_cast<int>( ::QEvent::MacSizeChange), 70},
    {sipName_MaxUser, static_cast<int>( ::QEvent::MaxUser), 70},
    {sipName_MetaCall, static_cast<int>( ::QEvent::MetaCall), 70},
    {sipName_ModifiedChange, static_cast<int>( ::QEvent::ModifiedChange), 70},
    {sipName_MouseButtonDblClick, static_cast<int>( ::QEvent::MouseButtonDblClick), 70},
    {sipName_MouseButtonPress, static_cast<int>( ::QEvent::MouseButtonPress), 70},
    {sipName_MouseButtonRelease, static_cast<int>( ::QEvent::MouseButtonRelease), 70},
    {sipName_MouseMove, static_cast<int>( ::QEvent::MouseMove), 70},
    {sipName_MouseTrackingChange, static_cast<int>( ::QEvent::MouseTrackingChange), 70},
    {sipName_Move, static_cast<int>( ::QEvent::Move), 70},
    {sipName_NonClientAreaMouseButtonDblClick, static_cast<int>( ::QEvent::NonClientAreaMouseButtonDblClick), 70},
    {sipName_NonClientAreaMouseButtonPress, static_cast<int>( ::QEvent::NonClientAreaMouseButtonPress), 70},
    {sipName_NonClientAreaMouseButtonRelease, static_cast<int>( ::QEvent::NonClientAreaMouseButtonRelease), 70},
    {sipName_NonClientAreaMouseMove, static_cast<int>( ::QEvent::NonClientAreaMouseMove), 70},
    {sipName_None_, static_cast<int>( ::QEvent::None), 70},
    {sipName_OkRequest, static_cast<int>( ::QEvent::OkRequest), 70},
    {sipName_OrientationChange, static_cast<int>( ::QEvent::OrientationChange), 70},
    {sipName_Paint, static_cast<int>( ::QEvent::Paint), 70},
    {sipName_PaletteChange, static_cast<int>( ::QEvent::PaletteChange), 70},
    {sipName_ParentAboutToChange, static_cast<int>( ::QEvent::ParentAboutToChange), 70},
    {sipName_ParentChange, static_cast<int>( ::QEvent::ParentChange), 70},
    {sipName_PlatformPanel, static_cast<int>( ::QEvent::PlatformPanel), 70},
    {sipName_PlatformSurface, static_cast<int>( ::QEvent::PlatformSurface), 70},
    {sipName_Polish, static_cast<int>( ::QEvent::Polish), 70},
    {sipName_PolishRequest, static_cast<int>( ::QEvent::PolishRequest), 70},
    {sipName_QueryWhatsThis, static_cast<int>( ::QEvent::QueryWhatsThis), 70},
    {sipName_ReadOnlyChange, static_cast<int>( ::QEvent::ReadOnlyChange), 70},
    {sipName_RequestSoftwareInputPanel, static_cast<int>( ::QEvent::RequestSoftwareInputPanel), 70},
    {sipName_Resize, static_cast<int>( ::QEvent::Resize), 70},
    {sipName_Scroll, static_cast<int>( ::QEvent::Scroll), 70},
    {sipName_ScrollPrepare, static_cast<int>( ::QEvent::ScrollPrepare), 70},
    {sipName_Shortcut, static_cast<int>( ::QEvent::Shortcut), 70},
    {sipName_ShortcutOverride, static_cast<int>( ::QEvent::ShortcutOverride), 70},
    {sipName_Show, static_cast<int>( ::QEvent::Show), 70},
    {sipName_ShowToParent, static_cast<int>( ::QEvent::ShowToParent), 70},
    {sipName_SockAct, static_cast<int>( ::QEvent::SockAct), 70},
    {sipName_StateMachineSignal, static_cast<int>( ::QEvent::StateMachineSignal), 70},
    {sipName_StateMachineWrapped, static_cast<int>( ::QEvent::StateMachineWrapped), 70},
    {sipName_StatusTip, static_cast<int>( ::QEvent::StatusTip), 70},
    {sipName_StyleChange, static_cast<int>( ::QEvent::StyleChange), 70},
    {sipName_TabletEnterProximity, static_cast<int>( ::QEvent::TabletEnterProximity), 70},
    {sipName_TabletLeaveProximity, static_cast<int>( ::QEvent::TabletLeaveProximity), 70},
    {sipName_TabletMove, static_cast<int>( ::QEvent::TabletMove), 70},
    {sipName_TabletPress, static_cast<int>( ::QEvent::TabletPress), 70},
    {sipName_TabletRelease, static_cast<int>( ::QEvent::TabletRelease), 70},
    {sipName_TabletTrackingChange, static_cast<int>( ::QEvent::TabletTrackingChange), 70},
    {sipName_ThreadChange, static_cast<int>( ::QEvent::ThreadChange), 70},
    {sipName_Timer, static_cast<int>( ::QEvent::Timer), 70},
    {sipName_ToolBarChange, static_cast<int>( ::QEvent::ToolBarChange), 70},
    {sipName_ToolTip, static_cast<int>( ::QEvent::ToolTip), 70},
    {sipName_ToolTipChange, static_cast<int>( ::QEvent::ToolTipChange), 70},
    {sipName_TouchBegin, static_cast<int>( ::QEvent::TouchBegin), 70},
    {sipName_TouchCancel, static_cast<int>( ::QEvent::TouchCancel), 70},
    {sipName_TouchEnd, static_cast<int>( ::QEvent::TouchEnd), 70},
    {sipName_TouchUpdate, static_cast<int>( ::QEvent::TouchUpdate), 70},
    {sipName_UngrabKeyboard, static_cast<int>( ::QEvent::UngrabKeyboard), 70},
    {sipName_UngrabMouse, static_cast<int>( ::QEvent::UngrabMouse), 70},
    {sipName_UpdateLater, static_cast<int>( ::QEvent::UpdateLater), 70},
    {sipName_UpdateRequest, static_cast<int>( ::QEvent::UpdateRequest), 70},
    {sipName_User, static_cast<int>( ::QEvent::User), 70},
    {sipName_WhatsThis, static_cast<int>( ::QEvent::WhatsThis), 70},
    {sipName_WhatsThisClicked, static_cast<int>( ::QEvent::WhatsThisClicked), 70},
    {sipName_Wheel, static_cast<int>( ::QEvent::Wheel), 70},
    {sipName_WinEventAct, static_cast<int>( ::QEvent::WinEventAct), 70},
    {sipName_WinIdChange, static_cast<int>( ::QEvent::WinIdChange), 70},
    {sipName_WindowActivate, static_cast<int>( ::QEvent::WindowActivate), 70},
    {sipName_WindowBlocked, static_cast<int>( ::QEvent::WindowBlocked), 70},
    {sipName_WindowDeactivate, static_cast<int>( ::QEvent::WindowDeactivate), 70},
    {sipName_WindowIconChange, static_cast<int>( ::QEvent::WindowIconChange), 70},
    {sipName_WindowStateChange, static_cast<int>( ::QEvent::WindowStateChange), 70},
    {sipName_WindowTitleChange, static_cast<int>( ::QEvent::WindowTitleChange), 70},
    {sipName_WindowUnblocked, static_cast<int>( ::QEvent::WindowUnblocked), 70},
    {sipName_ZOrderChange, static_cast<int>( ::QEvent::ZOrderChange), 70},
};

PyDoc_STRVAR(doc_QEvent, "\1QEvent(QEvent.Type)\n"
"QEvent(QEvent)");


static pyqt5ClassPluginDef plugin_QEvent = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtCore_QEvent = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QEvent,
        SIP_NULLPTR,
        &plugin_QEvent
    },
    {
        sipNameNr_QEvent,
        {0, 0, 1},
        7, methods_QEvent,
        148, enummembers_QEvent,
        0, SIP_NULLPTR,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QEvent,
    -1,
    -1,
    SIP_NULLPTR,
    SIP_NULLPTR,
    init_type_QEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QEvent,
    assign_QEvent,
    SIP_NULLPTR,
    copy_QEvent,
    release_QEvent,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
