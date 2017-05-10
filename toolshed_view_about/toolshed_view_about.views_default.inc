<?php
/**
 * @file
 * toolshed_view_about.views_default.inc
 */

/**
 * Implements hook_views_default_views().
 */
function toolshed_view_about_views_default_views() {
  $export = array();

  $view = new view();
  $view->name = 'aboutview';
  $view->description = '';
  $view->tag = 'default';
  $view->base_table = 'node';
  $view->human_name = 'AboutView / All Resources Widget';
  $view->core = 7;
  $view->api_version = '3.0';
  $view->disabled = FALSE; /* Edit this to true to make a default view disabled initially */

  /* Display: Master */
  $handler = $view->new_display('default', 'Master', 'default');
  $handler->display->display_options['title'] = 'About Us';
  $handler->display->display_options['use_more_always'] = FALSE;
  $handler->display->display_options['access']['type'] = 'perm';
  $handler->display->display_options['cache']['type'] = 'none';
  $handler->display->display_options['query']['type'] = 'views_query';
  $handler->display->display_options['exposed_form']['type'] = 'basic';
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['pager']['options']['items_per_page'] = '1';
  $handler->display->display_options['style_plugin'] = 'table';
  $handler->display->display_options['style_options']['columns'] = array(
    'title' => 'title',
  );
  $handler->display->display_options['style_options']['default'] = '-1';
  $handler->display->display_options['style_options']['info'] = array(
    'title' => array(
      'sortable' => 0,
      'default_sort_order' => 'asc',
      'align' => '',
      'separator' => '',
      'empty_column' => 0,
    ),
  );
  /* Header: Global: Unfiltered text */
  $handler->display->display_options['header']['area_text_custom']['id'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['table'] = 'views';
  $handler->display->display_options['header']['area_text_custom']['field'] = 'area_text_custom';
  $handler->display->display_options['header']['area_text_custom']['empty'] = TRUE;
  $handler->display->display_options['header']['area_text_custom']['content'] = '<p>Resources on the Library Toolshed are open to all. Anyone wishing to access these resources can simply select the resources and download them. Users wishing to add content need to sign up for an account here:</p>
 <p><a href="/user/register/" class="button">Create an Account</a></p>
<p><strong>About</strong></p>
<p>The Toolshed is a  collaborative initiative supported by The Alberta Library, The Association of BC Public Library Directors, Saskatchewan’s Multitype Library Board and the Manitoba Public Library Services Branch. The platform is hosted by our shared-service partner the BC Libraries Cooperative. It is a place of community knowledge and experience. It is where library staff share, access, and comment on training, instructional and programming resources created by library staff.</p>
<p>The collection, including its relevancy, currency and authority, is developed by the library community. The collection focus is on materials that support training and programming, including but not limited to, scripts, templates, outlines, and links to webinars and toolkits. Where possible, file formats that make sharing and building on the work easy are greatly appreciated. Materials for the collection have been developed by a library staff member and have been approved by the owning home library for uploading.</p>
<p>If you work for a library and would like to share your resources on the Toolshed, please sign up for an account and begin sharing.</p>

<p><ul>
<li><a href="http://www.thealbertalibrary.ab.ca/">The Alberta Library</a></li>
<li><a href="http://abcpld.org/">The Association of BC Public Library Directors</a></li>
<li><a href="http://sils.sk.ca.campusguides.com/mlb/index">Saskatchewan Multitype Library Board</a></li>
<li><a href="http://www.gov.mb.ca/chc/pls">Manitoba Public Library Services Branch</a></li>
</ul>
</p>
<p><strong>More about <a href="http://bc.libraries.coop/">The BC Libraries Cooperative</a></strong></p>

<p><strong>Accessing and Uploading Content</strong></p>
<p>Anyone can come to the Toolshed and access our resources. But if you would like to upload resources, please request an account at the user page. </p>
<p>You are able to upload the following document types: .doc, .docx, .ppt, .pptx, .pdf, .txt.</p>
<p>Video should be uploaded to a publicly visible streaming service like Vimeo or Youtube. The toolshed will allow you to then share YouTube and Vimeo links which will cause the videos to embed in this site. For others, simply link to the appropriate video page.</p>
<p>When uploading content, please do not include any personal information in the resource [e.g. screen shots of account information].</p>
<p><strong>Using Toolshed Content</strong></p>
<p>All content on the Toolshed is shared using a Creative Common Attribution-Non Commercial 3.0 Unported License. This means that anyone downloading content from the Toolshed is free to modify any resources in order to better suit their local library\'s needs as long as credit is given to the library and resource modified.</p>
<p>For example, a library using or modifying a Toolshed resource on how to download eBooks from a library website would include a note at the bottom of their modified resource giving credit in the following way.</p>
<p>"Portions of this resource were adapted from [document name] produced by [library name] found at the Toolshed."</p>
<p>For more information please consult the <a href="http://librarytoolshed.ca/sites/default/files/Toolshed_Collection_Policy-mar102014.pdf">Toolshed Collection Development Policy</a>.</p>
<p><strong>Contact Us</strong></p>
<p>If you have any questions, comments or suggestions regarding the TAL Toolshed, please contact us at: <a href="mailto:support@librarytoolshed.ca">support@librarytoolshed.ca</a></p>

<p><strong>Show the latest resources on your website</strong></p>
<p>Use the embed code below to embed the latest training resources on your website.</p>
';
  /* Field: Content: Title */
  $handler->display->display_options['fields']['title']['id'] = 'title';
  $handler->display->display_options['fields']['title']['table'] = 'node';
  $handler->display->display_options['fields']['title']['field'] = 'title';
  $handler->display->display_options['fields']['title']['label'] = 'Resource Title';
  $handler->display->display_options['fields']['title']['alter']['word_boundary'] = FALSE;
  $handler->display->display_options['fields']['title']['alter']['ellipsis'] = FALSE;
  /* Field: Content: Training Topic */
  $handler->display->display_options['fields']['field_training_topic']['id'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['table'] = 'field_data_field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['field'] = 'field_training_topic';
  $handler->display->display_options['fields']['field_training_topic']['delta_offset'] = '0';
  /* Field: Field: Source Library */
  $handler->display->display_options['fields']['field_source_library_region']['id'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['table'] = 'field_data_field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['field'] = 'field_source_library_region';
  $handler->display->display_options['fields']['field_source_library_region']['label'] = 'Source Library Region';
  /* Sort criterion: Content: Post date */
  $handler->display->display_options['sorts']['created']['id'] = 'created';
  $handler->display->display_options['sorts']['created']['table'] = 'node';
  $handler->display->display_options['sorts']['created']['field'] = 'created';
  $handler->display->display_options['sorts']['created']['order'] = 'DESC';
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Body (body) */
  $handler->display->display_options['filters']['body_value']['id'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['table'] = 'field_data_body';
  $handler->display->display_options['filters']['body_value']['field'] = 'body_value';
  $handler->display->display_options['filters']['body_value']['value'] = 'asdfasdf';
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['operator'] = 'not empty';

  /* Display: Page */
  $handler = $view->new_display('page', 'Page', 'page');
  $handler->display->display_options['path'] = 'about';

  /* Display: Web widget */
  $handler = $view->new_display('web_widgets', 'Web widget', 'web_widgets_1');
  $handler->display->display_options['defaults']['title'] = FALSE;
  $handler->display->display_options['pager']['type'] = 'some';
  $handler->display->display_options['defaults']['style_options'] = FALSE;
  $handler->display->display_options['defaults']['row_options'] = FALSE;
  $handler->display->display_options['defaults']['header'] = FALSE;
  $handler->display->display_options['defaults']['filter_groups'] = FALSE;
  $handler->display->display_options['defaults']['filters'] = FALSE;
  /* Filter criterion: Content: Published */
  $handler->display->display_options['filters']['status']['id'] = 'status';
  $handler->display->display_options['filters']['status']['table'] = 'node';
  $handler->display->display_options['filters']['status']['field'] = 'status';
  $handler->display->display_options['filters']['status']['value'] = 1;
  $handler->display->display_options['filters']['status']['group'] = 1;
  $handler->display->display_options['filters']['status']['expose']['operator'] = FALSE;
  /* Filter criterion: Content: Resource Type (field_resource_type) */
  $handler->display->display_options['filters']['field_resource_type_value']['id'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['table'] = 'field_data_field_resource_type';
  $handler->display->display_options['filters']['field_resource_type_value']['field'] = 'field_resource_type_value';
  $handler->display->display_options['filters']['field_resource_type_value']['operator'] = 'not empty';
  $handler->display->display_options['path'] = 'w';
  $handler->display->display_options['displays'] = array(
    'page' => 'page',
    'default' => 0,
  );
  $handler->display->display_options['width'] = '400';
  $handler->display->display_options['height'] = '400';
  $export['aboutview'] = $view;

  return $export;
}
