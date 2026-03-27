#pragma once

// ---------------------------------------------------------------------------
// Tap-hold feature configuration
// ---------------------------------------------------------------------------

// Settle a tap-hold key as tapped when it is pressed and released during fast
// typing (i.e. within FLOW_TAP_TERM ms of the previous key event).
// 200 ms is excellent — keep it.
#define FLOW_TAP_TERM 200

// Opposite-hands rule — forces same-hand rolls to register as taps.
#define CHORDAL_HOLD

// Required companion for Chordal Hold — lets opposite-hand holds fire instantly.
#define PERMISSIVE_HOLD

// Slightly higher than your 220 ms (feature author + ZSA both recommend ~240-250 ms
// with Chordal + Permissive). Gives you more breathing room for deliberate holds
// while Chordal still kills accidental same-hand mods.
#define TAPPING_TERM 250