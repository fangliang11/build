/********************************************************************************
** Form generated from reading UI file 'envelopeExtractorDlg.ui'
**
** Created by: Qt User Interface Compiler version 5.14.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ENVELOPEEXTRACTORDLG_H
#define UI_ENVELOPEEXTRACTORDLG_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QVBoxLayout>

QT_BEGIN_NAMESPACE

class Ui_EnvelopeExtractorDlg
{
public:
    QVBoxLayout *verticalLayout;
    QFrame *viewFrame;
    QHBoxLayout *horizontalLayout;
    QLabel *label;
    QLabel *messageLabel;
    QCheckBox *autoCheckBox;
    QPushButton *nextPushButton;
    QPushButton *skipPushButton;

    void setupUi(QDialog *EnvelopeExtractorDlg)
    {
        if (EnvelopeExtractorDlg->objectName().isEmpty())
            EnvelopeExtractorDlg->setObjectName(QString::fromUtf8("EnvelopeExtractorDlg"));
        EnvelopeExtractorDlg->resize(836, 682);
        verticalLayout = new QVBoxLayout(EnvelopeExtractorDlg);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        viewFrame = new QFrame(EnvelopeExtractorDlg);
        viewFrame->setObjectName(QString::fromUtf8("viewFrame"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Expanding);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(viewFrame->sizePolicy().hasHeightForWidth());
        viewFrame->setSizePolicy(sizePolicy);
        viewFrame->setMinimumSize(QSize(512, 512));
        viewFrame->setFrameShape(QFrame::StyledPanel);
        viewFrame->setFrameShadow(QFrame::Raised);

        verticalLayout->addWidget(viewFrame);

        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        label = new QLabel(EnvelopeExtractorDlg);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout->addWidget(label);

        messageLabel = new QLabel(EnvelopeExtractorDlg);
        messageLabel->setObjectName(QString::fromUtf8("messageLabel"));
        QSizePolicy sizePolicy1(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy1.setHorizontalStretch(0);
        sizePolicy1.setVerticalStretch(0);
        sizePolicy1.setHeightForWidth(messageLabel->sizePolicy().hasHeightForWidth());
        messageLabel->setSizePolicy(sizePolicy1);

        horizontalLayout->addWidget(messageLabel);

        autoCheckBox = new QCheckBox(EnvelopeExtractorDlg);
        autoCheckBox->setObjectName(QString::fromUtf8("autoCheckBox"));

        horizontalLayout->addWidget(autoCheckBox);

        nextPushButton = new QPushButton(EnvelopeExtractorDlg);
        nextPushButton->setObjectName(QString::fromUtf8("nextPushButton"));

        horizontalLayout->addWidget(nextPushButton);

        skipPushButton = new QPushButton(EnvelopeExtractorDlg);
        skipPushButton->setObjectName(QString::fromUtf8("skipPushButton"));

        horizontalLayout->addWidget(skipPushButton);


        verticalLayout->addLayout(horizontalLayout);


        retranslateUi(EnvelopeExtractorDlg);

        QMetaObject::connectSlotsByName(EnvelopeExtractorDlg);
    } // setupUi

    void retranslateUi(QDialog *EnvelopeExtractorDlg)
    {
        EnvelopeExtractorDlg->setWindowTitle(QCoreApplication::translate("EnvelopeExtractorDlg", "Envelope Extractor Visual Debug", nullptr));
        label->setText(QCoreApplication::translate("EnvelopeExtractorDlg", "Message", nullptr));
        messageLabel->setText(QCoreApplication::translate("EnvelopeExtractorDlg", "no message", nullptr));
        autoCheckBox->setText(QCoreApplication::translate("EnvelopeExtractorDlg", "auto", nullptr));
        nextPushButton->setText(QCoreApplication::translate("EnvelopeExtractorDlg", "Next", nullptr));
        skipPushButton->setText(QCoreApplication::translate("EnvelopeExtractorDlg", "Skip", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EnvelopeExtractorDlg: public Ui_EnvelopeExtractorDlg {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ENVELOPEEXTRACTORDLG_H
