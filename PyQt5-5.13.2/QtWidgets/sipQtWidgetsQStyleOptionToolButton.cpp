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

#include "sipAPIQtWidgets.h"

#line 773 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 29 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"

#line 26 "sip/QtCore/qnamespace.sip"
#include <qnamespace.h>
#line 33 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"
#line 773 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qstyleoption.sip"
#include <qstyleoption.h>
#line 36 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"
#line 26 "sip/QtGui/qfont.sip"
#include <qfont.h>
#line 39 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"
#line 26 "sip/QtGui/qicon.sip"
#include <qicon.h>
#line 42 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"
#line 26 "sip/QtCore/qsize.sip"
#include <qsize.h>
#line 45 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"
#line 26 "sip/QtCore/qpoint.sip"
#include <qpoint.h>
#line 48 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"
#line 27 "sip/QtCore/qstring.sip"
#include <qstring.h>
#line 51 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"
#line 28 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/sip/QtWidgets/qwidget.sip"
#include <qwidget.h>
#line 54 "/home/fernandaabreu/projetos/MyTicketsSearcher/PyQt5-5.13.2/QtWidgets/sipQtWidgetsQStyleOptionToolButton.cpp"


/* Cast a pointer to a type somewhere in its inheritance hierarchy. */
extern "C" {static void *cast_QStyleOptionToolButton(void *, const sipTypeDef *);}
static void *cast_QStyleOptionToolButton(void *sipCppV, const sipTypeDef *targetType)
{
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipCppV);

    if (targetType == sipType_QStyleOptionComplex)
        return static_cast< ::QStyleOptionComplex *>(sipCpp);

    if (targetType == sipType_QStyleOption)
        return static_cast< ::QStyleOption *>(sipCpp);

    return sipCppV;
}


/* Call the instance's destructor. */
extern "C" {static void release_QStyleOptionToolButton(void *, int);}
static void release_QStyleOptionToolButton(void *sipCppV, int)
{
    delete reinterpret_cast< ::QStyleOptionToolButton *>(sipCppV);
}


extern "C" {static void *array_QStyleOptionToolButton(Py_ssize_t);}
static void *array_QStyleOptionToolButton(Py_ssize_t sipNrElem)
{
    return new  ::QStyleOptionToolButton[sipNrElem];
}


extern "C" {static void assign_QStyleOptionToolButton(void *, Py_ssize_t, void *);}
static void assign_QStyleOptionToolButton(void *sipDst, Py_ssize_t sipDstIdx, void *sipSrc)
{
    reinterpret_cast< ::QStyleOptionToolButton *>(sipDst)[sipDstIdx] = *reinterpret_cast< ::QStyleOptionToolButton *>(sipSrc);
}


extern "C" {static void *copy_QStyleOptionToolButton(const void *, Py_ssize_t);}
static void *copy_QStyleOptionToolButton(const void *sipSrc, Py_ssize_t sipSrcIdx)
{
    return new  ::QStyleOptionToolButton(reinterpret_cast<const  ::QStyleOptionToolButton *>(sipSrc)[sipSrcIdx]);
}


extern "C" {static void dealloc_QStyleOptionToolButton(sipSimpleWrapper *);}
static void dealloc_QStyleOptionToolButton(sipSimpleWrapper *sipSelf)
{
    if (sipIsOwnedByPython(sipSelf))
    {
        release_QStyleOptionToolButton(sipGetAddress(sipSelf), 0);
    }
}


extern "C" {static void *init_type_QStyleOptionToolButton(sipSimpleWrapper *, PyObject *, PyObject *, PyObject **, PyObject **, PyObject **);}
static void *init_type_QStyleOptionToolButton(sipSimpleWrapper *, PyObject *sipArgs, PyObject *sipKwds, PyObject **sipUnused, PyObject **, PyObject **sipParseErr)
{
     ::QStyleOptionToolButton *sipCpp = SIP_NULLPTR;

    {
        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, ""))
        {
            sipCpp = new  ::QStyleOptionToolButton();

            return sipCpp;
        }
    }

    {
        const  ::QStyleOptionToolButton* a0;

        if (sipParseKwdArgs(sipParseErr, sipArgs, sipKwds, SIP_NULLPTR, sipUnused, "J9", sipType_QStyleOptionToolButton, &a0))
        {
            sipCpp = new  ::QStyleOptionToolButton(*a0);

            return sipCpp;
        }
    }

    return SIP_NULLPTR;
}


/* Define this type's super-types. */
static sipEncodedTypeDef supers_QStyleOptionToolButton[] = {{324, 255, 1}};

static sipEnumMemberDef enummembers_QStyleOptionToolButton[] = {
    {sipName_Arrow, static_cast<int>( ::QStyleOptionToolButton::Arrow), 402},
    {sipName_HasMenu, static_cast<int>( ::QStyleOptionToolButton::HasMenu), 402},
    {sipName_Menu, static_cast<int>( ::QStyleOptionToolButton::Menu), 402},
    {sipName_MenuButtonPopup, static_cast<int>( ::QStyleOptionToolButton::MenuButtonPopup), 402},
    {sipName_None_, static_cast<int>( ::QStyleOptionToolButton::None), 402},
    {sipName_PopupDelay, static_cast<int>( ::QStyleOptionToolButton::PopupDelay), 402},
    {sipName_Type, static_cast<int>( ::QStyleOptionToolButton::Type), 400},
    {sipName_Version, static_cast<int>( ::QStyleOptionToolButton::Version), 401},
};


extern "C" {static PyObject *varget_QStyleOptionToolButton_arrowType(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_arrowType(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::ArrowType sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipVal = sipCpp->arrowType;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_Qt_ArrowType);
}


extern "C" {static int varset_QStyleOptionToolButton_arrowType(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_arrowType(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::ArrowType sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipVal = ( ::Qt::ArrowType)sipConvertToEnum(sipPy, sipType_Qt_ArrowType);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->arrowType = sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_features(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_features(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QStyleOptionToolButton::ToolButtonFeatures*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -76);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->features;

    sipPy = sipConvertFromType(sipVal, sipType_QStyleOptionToolButton_ToolButtonFeatures, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -75, sipPySelf);
        sipKeepReference(sipPySelf, -76, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_features(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_features(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QStyleOptionToolButton::ToolButtonFeatures*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QStyleOptionToolButton::ToolButtonFeatures *>(sipForceConvertToType(sipPy, sipType_QStyleOptionToolButton_ToolButtonFeatures, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->features = *sipVal;

    sipReleaseType(sipVal, sipType_QStyleOptionToolButton_ToolButtonFeatures, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_font(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_font(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QFont*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -77);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->font;

    sipPy = sipConvertFromType(sipVal, sipType_QFont, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -11, sipPySelf);
        sipKeepReference(sipPySelf, -77, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_font(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_font(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QFont*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QFont *>(sipForceConvertToType(sipPy, sipType_QFont, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->font = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_icon(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_icon(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QIcon*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -78);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->icon;

    sipPy = sipConvertFromType(sipVal, sipType_QIcon, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -12, sipPySelf);
        sipKeepReference(sipPySelf, -78, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_icon(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_icon(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QIcon*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QIcon *>(sipForceConvertToType(sipPy, sipType_QIcon, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->icon = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_iconSize(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_iconSize(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QSize*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -79);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->iconSize;

    sipPy = sipConvertFromType(sipVal, sipType_QSize, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -19, sipPySelf);
        sipKeepReference(sipPySelf, -79, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_iconSize(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_iconSize(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QSize*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QSize *>(sipForceConvertToType(sipPy, sipType_QSize, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->iconSize = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_pos(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_pos(void *sipSelf, PyObject *sipPySelf, PyObject *)
{
    PyObject *sipPy;
     ::QPoint*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipPy = sipGetReference(sipPySelf, -80);

    if (sipPy)
        return sipPy;

    sipVal = &sipCpp->pos;

    sipPy = sipConvertFromType(sipVal, sipType_QPoint, SIP_NULLPTR);

    if (sipPy)
    {
        sipKeepReference(sipPy, -20, sipPySelf);
        sipKeepReference(sipPySelf, -80, sipPy);
    }

    return sipPy;
}


extern "C" {static int varset_QStyleOptionToolButton_pos(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_pos(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QPoint*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QPoint *>(sipForceConvertToType(sipPy, sipType_QPoint, SIP_NULLPTR, SIP_NOT_NONE, SIP_NULLPTR, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->pos = *sipVal;

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_text(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_text(void *sipSelf, PyObject *, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipVal = &sipCpp->text;

    return sipConvertFromType(sipVal, sipType_QString, SIP_NULLPTR);
}


extern "C" {static int varset_QStyleOptionToolButton_text(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_text(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::QString*sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    int sipValState;
    int sipIsErr = 0;

    sipVal = reinterpret_cast< ::QString *>(sipForceConvertToType(sipPy, sipType_QString, SIP_NULLPTR, SIP_NOT_NONE, &sipValState, &sipIsErr));

    if (sipIsErr)
        return -1;

    sipCpp->text = *sipVal;

    sipReleaseType(sipVal, sipType_QString, sipValState);

    return 0;
}


extern "C" {static PyObject *varget_QStyleOptionToolButton_toolButtonStyle(void *, PyObject *, PyObject *);}
static PyObject *varget_QStyleOptionToolButton_toolButtonStyle(void *sipSelf, PyObject *, PyObject *)
{
     ::Qt::ToolButtonStyle sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipVal = sipCpp->toolButtonStyle;

    return sipConvertFromEnum(static_cast<int>(sipVal), sipType_Qt_ToolButtonStyle);
}


extern "C" {static int varset_QStyleOptionToolButton_toolButtonStyle(void *, PyObject *, PyObject *);}
static int varset_QStyleOptionToolButton_toolButtonStyle(void *sipSelf, PyObject *sipPy, PyObject *)
{
     ::Qt::ToolButtonStyle sipVal;
     ::QStyleOptionToolButton *sipCpp = reinterpret_cast< ::QStyleOptionToolButton *>(sipSelf);

    sipVal = ( ::Qt::ToolButtonStyle)sipConvertToEnum(sipPy, sipType_Qt_ToolButtonStyle);

    if (PyErr_Occurred() != SIP_NULLPTR)
        return -1;

    sipCpp->toolButtonStyle = sipVal;

    return 0;
}

sipVariableDef variables_QStyleOptionToolButton[] = {
    {InstanceVariable, sipName_arrowType, (PyMethodDef *)varget_QStyleOptionToolButton_arrowType, (PyMethodDef *)varset_QStyleOptionToolButton_arrowType, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_features, (PyMethodDef *)varget_QStyleOptionToolButton_features, (PyMethodDef *)varset_QStyleOptionToolButton_features, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_font, (PyMethodDef *)varget_QStyleOptionToolButton_font, (PyMethodDef *)varset_QStyleOptionToolButton_font, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_icon, (PyMethodDef *)varget_QStyleOptionToolButton_icon, (PyMethodDef *)varset_QStyleOptionToolButton_icon, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_iconSize, (PyMethodDef *)varget_QStyleOptionToolButton_iconSize, (PyMethodDef *)varset_QStyleOptionToolButton_iconSize, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_pos, (PyMethodDef *)varget_QStyleOptionToolButton_pos, (PyMethodDef *)varset_QStyleOptionToolButton_pos, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_text, (PyMethodDef *)varget_QStyleOptionToolButton_text, (PyMethodDef *)varset_QStyleOptionToolButton_text, SIP_NULLPTR, SIP_NULLPTR},
    {InstanceVariable, sipName_toolButtonStyle, (PyMethodDef *)varget_QStyleOptionToolButton_toolButtonStyle, (PyMethodDef *)varset_QStyleOptionToolButton_toolButtonStyle, SIP_NULLPTR, SIP_NULLPTR},
};

PyDoc_STRVAR(doc_QStyleOptionToolButton, "\1QStyleOptionToolButton()\n"
"QStyleOptionToolButton(QStyleOptionToolButton)");


static pyqt5ClassPluginDef plugin_QStyleOptionToolButton = {
    SIP_NULLPTR,
    0,
    SIP_NULLPTR,
    SIP_NULLPTR
};


sipClassTypeDef sipTypeDef_QtWidgets_QStyleOptionToolButton = {
    {
        -1,
        SIP_NULLPTR,
        SIP_NULLPTR,
        SIP_TYPE_SCC|SIP_TYPE_SUPER_INIT|SIP_TYPE_LIMITED_API|SIP_TYPE_CLASS,
        sipNameNr_QStyleOptionToolButton,
        SIP_NULLPTR,
        &plugin_QStyleOptionToolButton
    },
    {
        sipNameNr_QStyleOptionToolButton,
        {0, 0, 1},
        0, SIP_NULLPTR,
        8, enummembers_QStyleOptionToolButton,
        8, variables_QStyleOptionToolButton,
        {SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR, SIP_NULLPTR},
    },
    doc_QStyleOptionToolButton,
    -1,
    -1,
    supers_QStyleOptionToolButton,
    SIP_NULLPTR,
    init_type_QStyleOptionToolButton,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    dealloc_QStyleOptionToolButton,
    assign_QStyleOptionToolButton,
    array_QStyleOptionToolButton,
    copy_QStyleOptionToolButton,
    release_QStyleOptionToolButton,
    cast_QStyleOptionToolButton,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR,
    SIP_NULLPTR
};
