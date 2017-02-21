//
// Copyright (c) 2013 Christopher Baker <https://christopherbaker.net>
//
// SPDX-License-Identifier:	MIT
//


#pragma once


#include "ofx/SMTP/Settings.h"


namespace ofx {
namespace SMTP {


/// \brief A convenience settings file for Gmail.
/// \details Gmail also works on port 465 with SSL/TLS encryption. Since port
///          587 is often blocked, the user might prefer to use port 465 with
///          SSL/TLS encryption. To use alternative settings, manually configure
//           your client settings.
class GmailSettings: public STARTTLSSettings
{
public:
    /// \brief Create a GmailSettings object.
    /// \param username The account username.
    /// \param password The account password.
    GmailSettings(const std::string& username,
                  const std::string& password);

    /// \brief Destroy the GmailSettings.
    virtual ~GmailSettings();

    /// \brief The default Gmail host.
    static const std::string DEFAULT_GMAIL_HOST;

    enum
    {
        /// \brief The default Gmail port.
        DEFAULT_GMAIL_PORT = DEFAULT_SMTP_STARTTLS_PORT
    };
};


} } // namespace ofx::SMTP
