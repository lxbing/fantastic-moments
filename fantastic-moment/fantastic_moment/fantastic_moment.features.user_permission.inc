<?php
/**
 * @file
 * fantastic_moment.features.user_permission.inc
 */

/**
 * Implements hook_user_default_permissions().
 */
function fantastic_moment_user_default_permissions() {
  $permissions = array();

  // Exported permission: create moment content
  $permissions['create moment content'] = array(
    'name' => 'create moment content',
    'roles' => array(),
  );

  // Exported permission: delete any moment content
  $permissions['delete any moment content'] = array(
    'name' => 'delete any moment content',
    'roles' => array(),
  );

  // Exported permission: delete own moment content
  $permissions['delete own moment content'] = array(
    'name' => 'delete own moment content',
    'roles' => array(),
  );

  // Exported permission: edit any moment content
  $permissions['edit any moment content'] = array(
    'name' => 'edit any moment content',
    'roles' => array(),
  );

  // Exported permission: edit own moment content
  $permissions['edit own moment content'] = array(
    'name' => 'edit own moment content',
    'roles' => array(),
  );

  return $permissions;
}
