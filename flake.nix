{
  inputs = {
    nixpkgs.url = "github:NixOS/nixpkgs/nixpkgs-unstable";
    devshell.url = "github:numtide/devshell";
    flake-utils.url = "github:numtide/flake-utils";
  };

  outputs = {
    self,
    devshell,
    flake-utils,
    nixpkgs,
  }:
  flake-utils.lib.eachDefaultSystem (system:
    let
      pkgs = import nixpkgs {
        inherit system;
        overlays = [
          devshell.overlays.default
        ];
      };
    in
      {
        devShell = pkgs.devshell.mkShell {
          packages = with pkgs; [
            nodejs
            tree-sitter
            gcc
          ];
        };
      }
    );
}
