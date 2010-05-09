# Maintainer: Alexey Yakovenko <waker@users.sourceforge.net>

pkgname=deadbeef
pkgver=0.4.0
pkgrel=1
pkgdesc="mp3/ogg/flac/ape/sid/mod/nsf/m4a/mpc/shn music player based on GTK2"
arch=(i686 x86_64)
url="http://deadbeef.sourceforge.net"
license=('GPL2')
makedepends=('gtk2', 'libsamplerate', 'libvorbis', 'libmad', 'flac', 'curl', 'alsa-lib', 'wavpack', 'libsndfile', 'libcdio', 'libcddb', 'ffmpeg')
depends=('gtk2' 'libsamplerate' 'alsa-lib')
optdepends=('libvorbis: ogg vorbis playback', 'libmad: mp1/2/3 playback', 'flac: flac playback', 'curl: lastfm scrobbler, shoutcast, icecast, podcast support', 'wavpack: wv playback', 'libsndfile: wav playback', "libcdio and libcddb: audio cd playback", "ffmpeg: for aac, mpc, shn, aa3, oma, ac3, etc")
makedepends=('pkgconfig')
source=(http://downloads.sourceforge.net/project/$pkgname/$pkgname-$pkgver.tar.bz2)
md5sums=('4a8afe84288e2ca99f5b3dd584d11553')

build() {
    cd $srcdir/$pkgname-$pkgver
    ./configure --prefix=/usr
    make || return 1
    make prefix=$pkgdir/usr install
}
