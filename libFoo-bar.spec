Name:           libFoo-bar
Version:        1.1
Release:        %autorelease
Summary:        A simple app
License:        MIT
Source0:        %{name}-%{version}.tar.gz

BuildRequires: gcc
BuildRequires: automake

%description
A simple example spec file for Fedora.

%prep
%setup -q

%build
autoreconf -fiv
%configure
%make_build

%install
%make_install

%check

%files
%{_bindir}/Bar

%changelog
%autochangelog
